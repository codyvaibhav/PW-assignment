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
void inorderTraversal(TreeNode* root, std::vector<int>& vals) {
    if (!root) return;
    inorderTraversal(root->left, vals);
    vals.push_back(root->val);
    inorderTraversal(root->right, vals);
}

TreeNode* buildBST(std::vector<int>& vals, int start, int end) {
    if (start > end) return nullptr;
    int mid = start + (end - start) / 2;
    TreeNode* root = new TreeNode(vals[mid]);
    root->left = buildBST(vals, start, mid - 1);
    root->right = buildBST(vals, mid + 1, end);
    return root;
}

TreeNode* balanceBST(TreeNode* root) {
    std::vector<int> vals;
    inorderTraversal(root, vals);
    return buildBST(vals, 0, vals.size() - 1);
}
int main(){
    return 0;
}    