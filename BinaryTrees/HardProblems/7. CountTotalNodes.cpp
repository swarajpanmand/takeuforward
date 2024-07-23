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
// class Solution {
// public:
    // int nodes=0;
    // int countNodes(TreeNode* root) {
    //     if (root == nullptr) return 0;
    //     return 1 + countNodes(root->left) + countNodes(root->right);
    // }
    // void countNodesTree(TreeNode* root){
    //     if(root==nullptr) return;
    //     if(root->left){
    //         countNodesTree(root->left);
    //         nodes+=1;
    //     }
    //     if(root->right){
    //         countNodesTree(root->right);
    //         nodes+=1;
    //     }
    // }

    // int countNodes(TreeNode* root) {
    //     if(root==nullptr) return 0;

    //     int lh=leftHeight(root);
    //     int rh = rightHeight(root);

    //     if(lh == rh){
    //         return (1<<lh)-1;
    //     }

    //     return 1+countNodes(root->left)+ countNodes(root->right);
    // }

    // int leftHeight(TreeNode* curr){
    //     int count =0;
    //     while(curr){
    //         count+=1;
    //         curr= curr->left;
    //     }
    //     return count;
    // }
    // int rightHeight(TreeNode* curr){
    //     int count = 0;
    //     while(curr){
    //         count+=1;
    //         curr= curr->right;
    //     }
    //     return count;
    // }
// };
class Solution {
    public:
     int countNodes(TreeNode* root) {
        if(root == nullptr) return 0 ;
        
        return (countNodes(root->left) + countNodes(root->right))+1 ;
    }
};