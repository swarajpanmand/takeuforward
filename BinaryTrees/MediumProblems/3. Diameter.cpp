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
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        getHeight(root);
        return diameter;
    }

    int getHeight(TreeNode* root){
        if(root== nullptr) return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        diameter= max(diameter, lh+rh);
        return max(lh,rh)+1;
    }
};