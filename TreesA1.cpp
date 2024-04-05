#include <stdio.h>
#include <iostream>
#include <vector>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

using namespace std;
int findProduct(TreeNode* root) {
    if (!root) return 1;
    return root->val * findProduct(root->left) * findProduct(root->right);
}

// Find the min value in Binary Tree
int findMin(TreeNode* root) {
    if (!root) return INT_MAX;
    return std::min(root->val, std::min(findMin(root->left), findMin(root->right)));
}
int getHeight(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(getHeight(root->left),getHeight(root->right));
}

// Check if a Binary Tree is balanced
bool isBalanced(TreeNode* root) {
    if (!root) return true;
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

// Check if a Binary Tree is symmetric
bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
}

bool isMirror(TreeNode* left, TreeNode* right) {
    if (!left && !right) return true;
    if (!left || !right) return false;
    return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}
int main(){
    return 0;
}    