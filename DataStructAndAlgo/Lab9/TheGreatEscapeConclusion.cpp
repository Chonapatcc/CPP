#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

void BuildBinaryTree(string input);
int splitString(string input);


class Node
{
public :
    string name;
    Node *parent;
    Node *leftNode;
    Node *rightNode;
    Node(char val)
    {
        name = val;
        leftNode = nullptr;
        rightNode = nullptr;
    }
};

void BuildBinaryTree(Node *parent,string way,string input)
{
    Node *newNode = new Node(input[0]);
    if(parent != nullptr)
    {
        if(way=="left")
        {
            parent->leftNode = newNode;
        }
        else
        {
            parent->rightNode = newNode;
        }
        newNode->parent = parent;
    }

    if(input.size() >1 )
    {
        input = input.substr(2,input.size()-2);
    }
    else
    {
        return;
    }
  
    int splitId = splitString(input);
    if(splitId == 0)
    {
        return ;
    }
    string text1 = input.substr(0,splitId);
    string text2 = input.substr(splitId+1, input.size() - splitId );

    
    BuildBinaryTree(newNode,"left",text1);
    BuildBinaryTree(newNode,"right",text2);
}

int splitString(string input)
{
    int counter = 0 ;
    
    for(int i=0 ; i< input.size() ;i++)
    {
        if(input[i] == '?')
        {
            counter ++ ;
        }
        if(input[i] == ':')
        {
            if(counter == 0)
            {
                return i;
            }
            else
            {
                counter--;
            }
        }
    }
    return 0;
}

void flipTree(Node *node)
{
    if(node == nullptr)
    {
        return;
    }

    Node *left = node->leftNode;
    Node *right = node->rightNode;

    node->leftNode = right;
    node->rightNode = left;

    flipTree(left);
    flipTree(right);
}

void preorder(Node *node,string &storer)
{
    if(node == nullptr)
    {
        return;
    }
    storer+=node->name;
    preorder(node->leftNode,storer);
    preorder(node->rightNode,storer);
}

void inorder(Node *node,string & storer)
{
    if(node == nullptr)
    {
        return;
    }
    inorder(node->leftNode,storer);
    storer+= node ->name;
    inorder(node->rightNode,storer);
}

void postorder(Node *node,string &storer)
{
    if(node == nullptr)
    {
        return;
    }
    postorder(node->leftNode,storer);
    postorder(node->rightNode,storer);
    storer+=node->name;
}

void bfs(Node *node,string &storer)
{
    vector<Node*> queue;
    vector<Node*> newQueue;
    queue.push_back(node);

    while(queue.size() > 0)
    {
        for(int i=0 ; i<queue.size() ; i++)
        {
            if(queue[i]==nullptr)
            {
                continue;
            }
            storer+=queue[i]->name;
            newQueue.push_back(queue[i]->leftNode);
            newQueue.push_back(queue[i]->rightNode);
        }
        queue = newQueue;
        newQueue.clear();
    }
}

void levelorder(Node *node,string &storer)
{
    bfs(node,storer);
}

bool validCoord(int x, int y, int m, int n) {
    if (x>=0 && x<m && y>=0 && y<n)
        return true;
    return false;
}

bool findWord(int index, string word, vector<vector<char>> &grid,
              int x, int y, int dirX, int dirY) {
    
    if (index == word.length()) return true;
    
    if (validCoord(x, y, grid.size(), grid[0].size())
        && word[index] == grid[x][y])
        return findWord(index+1, word, grid, x+dirX, 
                        y+dirY, dirX, dirY);
        
    return false;
}

vector<vector<int>> searchWord(vector<vector<char>> grid, 
                               string word) {
    int m = grid.size();
    int n = grid[0].size();
    
    vector<vector<int>> ans;
    
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                if (findWord(0, word, grid, i, j, x[k], y[k])) {
                    ans.push_back({i, j});
                    break;
                }
            }
        }
    }
    
    return ans;
}

int main()
{
    string input; 
    cin >> input;

    string keyword;
    cin >> keyword;

    Node *root = new Node('x');
    BuildBinaryTree(root,"left",input);
    
    root = root->leftNode ;

    flipTree(root);

    vector<string> storer;

    for(int i=0 ;i < 4; i ++)
    {
        storer.push_back("");
    }

    preorder(root,storer[0]);
    postorder(root,storer[1]);
    inorder(root,storer[2]);
    levelorder(root,storer[3]);

    vector<vector<char>> matrix(4, vector<char>(1000, ' '));
    for (int i = 0; i < 4; i++) {
        string store = storer[i];
        for (int j = 0; j < store.size(); j++) {
            matrix[i][j] = store[j];
        }
    }

    vector<vector<int>> positions = searchWord(matrix, keyword);

    string result = "";
    for (int i = 0; i < positions.size(); i++) {
        result += to_string(positions[i][0] + positions[i][1]);
    }

    cout << result << endl;
    
    return 0;
}