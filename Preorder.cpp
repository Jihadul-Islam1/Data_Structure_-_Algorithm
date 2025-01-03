#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    
    // Visit the root
    cout << root->value << " ";
    
    // Traverse the left subtree
    preorderTraversal(root->left);
    
    // Traverse the right subtree
    preorderTraversal(root->right);
}

void deleteTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    // Delete the left and right subtrees
    deleteTree(root->left);
    deleteTree(root->right);

    // Delete the current node
    delete root;
}

int main() {
    // Create a sample tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    // Clean up memory
    deleteTree(root);
    
    return 0;
}
