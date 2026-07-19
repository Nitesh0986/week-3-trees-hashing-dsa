#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Insert a node into BST
Node* insert(Node* root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

// Search a value in BST
bool search(Node* root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }

    if (key < root->data)
    {
        return search(root->left, key);
    }

    return search(root->right, key);
}

int main()
{
    Node* root = NULL;

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter BST values: ";

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    int key;

    cout << "Enter value to search: ";
    cin >> key;

    if (search(root, key))
    {
        cout << key << " is found in the BST." << endl;
    }
    else
    {
        cout << key << " is not found in the BST." << endl;
    }

    return 0;
}