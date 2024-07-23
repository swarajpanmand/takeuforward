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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // vector<vector<int>> ans;
        // if(root == nullptr) return ans;

        // queue<TreeNode*> q;
        // q.push(root);

        // bool leftToRight = true;

        // while(!q.empty()){
        //     int size = q.size();
        //     vector<int> row(size);
        //     for(int i=0; i<size ;i++){
        //         TreeNode* node = q.front();
        //         q.pop();

        //         int index  = leftToRight ? i : (size-i-1);
        //         row[index] = node->val;
        //         if(node->left != nullptr) q.push(node->left);
        //         if(node->right != nullptr) q.push(node->right);
        //     }
        //     leftToRight = !leftToRight;
        //     ans.push_back(row);
        // }
        // return ans;



        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0; i<size; i++){
                TreeNode* node =q.front();

                q.pop();

                level.push_back(node->val);
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!= nullptr){
                    q.push(node->right);
                }

            }
            if(leftToRight)
                ans.push_back(level);
            else{
                reverse(level.begin(), level.end());
                ans.push_back(level);}
            leftToRight = !leftToRight;
        }
        return ans;
    }
};