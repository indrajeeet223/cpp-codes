#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Node {
public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children;
    int countwordsendinghere;
    int countwordstarting;

    Node(char data) {
        this->data = data;
        this->terminal = false;
        this->countwordsendinghere = 0;
        this->countwordstarting = 0;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node('\0'); // Root node with an empty character
    }

    void insert(string s) {
        Node* temp = root;
        for (char ch : s) {
            if (!temp->children.count(ch)) { // Create node if not exists
                temp->children[ch] = new Node(ch);
            }
            temp = temp->children[ch];
            temp->countwordstarting++;
        }
        temp->terminal = true;
        temp->countwordsendinghere++;
    }

    int countprefix(string s) {
        Node* temp = root;
        for (char ch : s) {
            if (!temp->children.count(ch)) {
                return 0; // Prefix not found
            }
            temp = temp->children[ch];
        }
        return temp->countwordsendinghere;
    }

    int countstartingwith(string s) {
        Node* temp = root;
        for (char ch : s) {
            if (!temp->children.count(ch)) {
                return 0; // Prefix not found
            }
            temp = temp->children[ch];
        }
        return temp->countwordstarting;
    }

    void erase(string s) {
        if (countprefix(s) == 0) {
            cout << "Word not found in Trie!" << endl;
            return;
        }

        Node* temp = root;
        for (char ch : s) {
            temp->countwordstarting--;
            temp = temp->children[ch];
        }
        temp->countwordsendinghere--;

        // Clean up unused nodes
        temp = root;
        for (char ch : s) {
            Node* next = temp->children[ch];
            if (next->countwordstarting == 0) {
                delete next;
                temp->children.erase(ch);
                return;
            }
            temp = next;
        }
    }
};

int main() {
    Trie t;
    t.insert("apple");
    t.insert("app");
    t.insert("apex");

    cout << "Words starting with 'ap': " << t.countstartingwith("ap") << endl;
    cout << "Words ending at 'apple': " << t.countprefix("apple") << endl;

    t.erase("apple");
    cout << "Words starting with 'ap' after deletion: " << t.countstartingwith("ap") << endl;

    return 0;
}
