#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printArr(const vector<vector<int>>& arr, string type,vector <int> &status) {
    if(type == "Matrix")
    {
        cout << "  ";
        for (int i = 0; i < arr.size(); ++i) 
        {
            if(status[i])
            {
                cout << " " <<i;
            }
        }
        cout << endl;
        
        for (int i = 0; i < arr.size(); ++i) 
        {
            if(status[i])
            {
                cout << i;
                for (int y = 0; y < arr.size(); ++y) 
                {
                    if(arr[i][y])
                    {
                        cout << " "<<y;
                    }
                }
                cout << endl;
            }
        }
    }
    else if(type == "List")
    {
        for (int i = 0; i < arr.size(); ++i) 
        {
            if(status[i])
            {
                cout << "[" << i << "] -> ";
                for (int y = 0; y < arr.size(); ++y) 
                {
                    if(arr[i][y])
                    {
                        for (int j = 0; j < arr[i].size(); ++j) 
                        {
                            cout << arr[i][j] << " ->";
                        }
                        cout << endl;
                    }
                }
                cout << "NULL" << endl;
            }
        }
    }
    cout << "====================" <<endl;
}

void printList(const vector<list<int>>& adjList) {
    
}

pair<int, int> findMaxDegrees(const vector<vector<int>>& matrix) {
    int maxInDegree = 0, maxOutDegree = 0;
    int maxInVertex = 0, maxOutVertex = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        int inDegree = 0, outDegree = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j]) {
                ++outDegree;
            }
            if (matrix[j][i]) {
                ++inDegree;
            }
        }

        if (inDegree > maxInDegree) {
            maxInDegree = inDegree;
            maxInVertex = i;
        }

        if (outDegree > maxOutDegree) {
            maxOutDegree = outDegree;
            maxOutVertex = i;
        }
    }

    return make_pair(maxInVertex, maxOutVertex);
}



int main() 
{
    string type;
    int numVertices;
    cin >> type >> numVertices;
    //create graph
    vector<vector<int>> arr(10, vector<int>(10, 0));
    vector<int> status(10,0);
    for(int i =0  ; i<numVertices ; i++)
    {
        status[i] = 1;
    }

    char command;
    while (cin >> command) 
    {
        if (command == 'e')
        {
            int a, b;
            cin >> a >> b;
            arr[a][b] = 1;
        } 
        else if (command == 'r') 
        {
            int a, b;
            cin >> a >> b;
            arr[a][b] = 0;
        
        } 
        else if (command == 'v') 
        {
            numVertices++;
            status[numVertices-1] = 1; 
        } 
        else if (command == 'u') 
        {
            int a;
            cin>>a;
            status[a] =0;
            if (a == numVertices -1)
            {
                numVertices--;
            }
        } 
        else if (command == 'p') 
        {
            printArr(arr,type,status);
        } 
        else if (command == 'q') 
        {
            pair<int, int> maxDegrees = findMaxDegrees(arr);
            cout << "Maximum In-Degree : Vertex " << maxDegrees.first << " " << maxDegrees.first << endl;
            cout << "Maximum Out-Degree: Vertex " << maxDegrees.second << " " << maxDegrees.second << endl;
        }

    }
}

    // else if (representationType == "List") {
    //     vector<list<int>> adjList(numVertices);

    //     char command;
    //     while (cin >> command) {
//              else if (command == 'v') {
    //             adjList.emplace_back();
    //         } else if (command == 'u') {
    //             int a;
    //             cin >> a;
    //             adjList.erase(adjList.begin() + a);
    //             for (auto& list : adjList) {
    //                 list.remove(a);
    //             }
    //         } else if (command == 'q') {
    //             vector<vector<int>> matrix(adjList.size(), vector<int>(adjList.size(), 0));
    //             for (int i = 0; i < adjList.size(); ++i) {
    //                 for (int neighbor : adjList[i]) {
    //                     matrix[i][neighbor] = 1;
    //                 }
    //             }

    //             pair<int, int> maxDegrees = findMaxDegrees(matrix);
    //             cout << "Maximum In-Degree : Vertex " << maxDegrees.first << " " << maxDegrees.first << endl;
    //             cout << "Maximum Out-Degree: Vertex " << maxDegrees.second << " " << maxDegrees.second << endl;
    //         }
    //     }
    // }
    // return 0;
