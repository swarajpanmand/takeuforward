/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return (root == nullptr) || isSym(root->left, root->right);
    }

    bool isSym(TreeNode* left, TreeNode* right){
        if(left == nullptr || right== nullptr) return left==right;
        if(right->val != left->val) return false;
        return isSym(left->left, right->right) && isSym(left->right, right->left);
    }
};