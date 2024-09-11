#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    string name;
    int sum = 0;
    struct Node* parent;
    struct Node* leftChild;
    struct Node* rightSibling;
};

struct Node* createRoot(int key, string name)
{
    // Allocate memory for new node
    struct Node* node = new Node();
    // Assign key to this node
    node->key = key;
    node->name = name;
    // Initialize parent
    node->parent = NULL;
    // Initialize left child, and right sibling as NULL

    node->leftChild = NULL;
    node->rightSibling = NULL;
    return(node);
}

struct Node* createNode(int key, struct Node* parent, string name)
{
    // Allocate memory for new node
    struct Node* node = new Node();
    // Assign key to this node
    node->key = key;
    // Initialize parent
    node->parent = parent;
    node->name = name;
    // Initialize left child, and right sibling as NULL
    node->leftChild = NULL;
    node->rightSibling = NULL;

    // Set this node as a child to its parent
    if(node->parent != NULL) 
    {
        if(node->parent->leftChild != NULL) 
        {
            struct Node* child = node->parent->leftChild;
            while(child->rightSibling != NULL) 
            {
                child = child->rightSibling;
            }
            child->rightSibling = node;
        }
        else 
        {
            node->parent->leftChild = node;
        }
    }
    return node;
}
struct Node* getParent(struct Node* node)
{
    return node->parent;
}

struct Node* getChild(struct Node* node, int k)
{
    struct Node* child = node->leftChild;
    for(int i=1; i<k; i++) 
    {
        child = child->rightSibling;
    }
    return child;
}

void isRoot(struct Node* node)
{
    if(node->parent == NULL)
        printf("Yes\n");
    else
        printf("No\n");
}

void isExternal(struct Node* node)
{
    if(node->leftChild == NULL)
        printf("Yes\n");
    else
        printf("No\n");
}

void isInternal(struct Node* node)
{
    if(node->leftChild != NULL)
        printf("Yes\n");
    else
        printf("No\n");
}

int depth(struct Node* node)
{
    int depth = 0;
    while(node->parent != NULL) 
    {
        node = node->parent;
        depth++;
    }
    return depth;
}

void preorder(struct Node* node)
{
    if(node == NULL)
    {
        return ;
    }
    node->sum = node->key+node->sum;
    cout << "name = "<<node->name << " key = " << node->key << " sum = " << node->sum  << endl;
    Node *child = node->leftChild;
    while(child != NULL)
    {
        child->sum = node->sum;
        preorder(child);
        child = child->rightSibling;
    }
};

void postorder(struct Node* node)
{
    if(node == NULL)
    {
        return ;
    }
    Node *child = node->leftChild;
    int sum =0;
    while(child != NULL)
    {
        postorder(child);
        sum+=child->sum;
        child = child->rightSibling;

    }
    node->sum = sum+node->key;
    cout << "name = "<<node->name << " key = " << node->key << " sum = " << node->sum  << endl;
};



int main()
{
    struct Node* node1 = createRoot(1000,"/user/rt/courses/");
    struct Node* node2 = createNode(2000, node1,"/user/rt/courses/cs016/");

    struct Node* node3 = createNode(8000, node2,"/user/rt/courses/cs016/grades");

    struct Node* node4 = createNode(1000, node2,"/user/rt/courses/cs016/homeworks/");
    struct Node* node5 = createNode(3000, node4,"/user/rt/courses/cs016/homeworks/hw1");
    struct Node* node6 = createNode(2000, node4,"/user/rt/courses/cs016/homeworks/hw2");
    struct Node* node7 = createNode(4000, node4,"/user/rt/courses/cs016/homeworks/hw3");

    struct Node* node8 = createNode(1000, node2,"/user/rt/courses/cs016/programs/");
    struct Node* node9 = createNode(57000, node8,"/user/rt/courses/cs016/programs/pr1");
    struct Node* node10 = createNode(97000, node8,"/user/rt/courses/cs016/programs/pr2");
    struct Node* node11 = createNode(74000, node8,"/user/rt/courses/cs016/programs/pr3");
    
    struct Node* node12 = createNode(1000, node1,"/user/rt/courses/cs252/");

    struct Node* node14 = createNode(1000, node12,"/user/rt/courses/cs252/projects/");

    struct Node* node15 = createNode(1000, node14,"/user/rt/courses/cs252/projects/papers/");
    struct Node* node16 = createNode(26000, node15,"/user/rt/courses/cs252/projects/papers/buylow");
    struct Node* node17 = createNode(55000, node15,"/user/rt/courses/cs252/projects/papers/sellhigh");

    struct Node* node18 = createNode(1000, node14,"/user/rt/courses/cs252/projects/demos/");
    struct Node* node19 = createNode(4786000, node18,"/user/rt/courses/cs252/projects/demos/market");

    struct Node* node13 = createNode(3000, node12,"/user/rt/courses/cs252/grades");



    cout << "preorder" <<endl;
    preorder(node1);
    cout << "end" <<endl;


    cout << "postorder" <<endl;
    postorder(node1);
    cout << "end" <<endl;

}