#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable
{
private:
    int table[TABLE_SIZE];

public:
    HashTable()
    {
        for(int i = 0; i < TABLE_SIZE; i++)
        {
            table[i] = -1;
        }
    }

    int hashFunction(int key)
    {
        return key % TABLE_SIZE;
    }

    void insert(int key)
    {
        int index = hashFunction(key);

        if(table[index] == -1)
        {
            table[index] = key;
            cout << key << " inserted at index " << index << endl;
        }
        else
        {
            cout << "Collision occurred! Cannot insert " << key << endl;
        }
    }

    void search(int key)
    {
        int index = hashFunction(key);

        if(table[index] == key)
        {
            cout << key << " found at index " << index << endl;
        }
        else
        {
            cout << key << " not found." << endl;
        }
    }

    void display()
    {
        cout << "\nHash Table\n";
        cout << "-------------------\n";

        for(int i = 0; i < TABLE_SIZE; i++)
        {
            cout << i << " --> ";

            if(table[i] == -1)
                cout << "Empty";
            else
                cout << table[i];

            cout << endl;
        }
    }
};

int main()
{
    HashTable ht;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        ht.insert(key);
    }

    ht.display();

    int key;

    cout << "\nEnter element to search: ";
    cin >> key;

    ht.search(key);

    return 0;
}