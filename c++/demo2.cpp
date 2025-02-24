#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }
    
    // Print the data of the node
    cout << node->data << " ";      
        
    
    // Recur on the left subtree
    preorderTraversal(node->left);
    
    // Recur on the right subtree
    preorderTraversal(node->right);
}

int main() {
    // Creating a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Preorder traversal of binary tree is: ";
    preorderTraversal(root);
    
    return 0;
}