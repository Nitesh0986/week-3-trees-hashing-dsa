#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Node
{
    string name;
    string phone;
    Node *left;
    Node *right;

    Node(string n, string p)
    {
        name = n;
        phone = p;
        left = NULL;
        right = NULL;
    }
};

// Insert Contact
Node* insert(Node* root, string name, string phone)
{
    if (root == NULL)
        return new Node(name, phone);

    if (name < root->name)
        root->left = insert(root->left, name, phone);
    else if (name > root->name)
        root->right = insert(root->right, name, phone);
    else
        cout << "\nContact already exists!\n";

    return root;
}

// Search Contact
Node* search(Node* root, string name)
{
    if (root == NULL || root->name == name)
        return root;

    if (name < root->name)
        return search(root->left, name);

    return search(root->right, name);
}

// Find Minimum Node
Node* minValueNode(Node* root)
{
    Node* current = root;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Delete Contact
Node* deleteNode(Node* root, string name)
{
    if (root == NULL)
        return root;

    if (name < root->name)
        root->left = deleteNode(root->left, name);

    else if (name > root->name)
        root->right = deleteNode(root->right, name);

    else
    {
        // Node with one child or no child
        if (root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children
        Node* temp = minValueNode(root->right);

        root->name = temp->name;
        root->phone = temp->phone;

        root->right = deleteNode(root->right, temp->name);
    }

    return root;
}

// Display Contacts (Inorder Traversal)
void display(Node* root)
{
    if (root == NULL)
        return;

    display(root->left);

    cout << "-----------------------------\n";
    cout << "Name  : " << root->name << endl;
    cout << "Phone : " << root->phone << endl;

    display(root->right);
}

int main()
{
    Node* root = NULL;
    int choice;
    string name, phone;

    do
    {
        cout << "\n=================================\n";
        cout << "      CONTACT DIRECTORY\n";
        cout << "=================================\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Delete Contact\n";
        cout << "4. Display Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter Phone Number: ";
                getline(cin, phone);

                root = insert(root, name, phone);

                cout << "\nContact Added Successfully!\n";
                break;

            case 2:
            {
                cout << "\nEnter Name to Search: ";
                cin.ignore();
                getline(cin, name);

                Node* result = search(root, name);

                if(result)
                {
                    cout << "\nContact Found\n";
                    cout << "Name  : " << result->name << endl;
                    cout << "Phone : " << result->phone << endl;
                }
                else
                {
                    cout << "\nContact Not Found!\n";
                }

                break;
            }

            case 3:
                cout << "\nEnter Name to Delete: ";
                cin.ignore();
                getline(cin, name);

                if(search(root, name))
                {
                    root = deleteNode(root, name);
                    cout << "\nContact Deleted Successfully!\n";
                }
                else
                {
                    cout << "\nContact Not Found!\n";
                }

                break;

            case 4:
                if(root == NULL)
                {
                    cout << "\nDirectory is Empty!\n";
                }
                else
                {
                    cout << "\n===== CONTACT DIRECTORY =====\n";
                    display(root);
                }
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}