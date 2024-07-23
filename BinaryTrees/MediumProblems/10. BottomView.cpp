class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==nullptr) return ans;
        map<int, int> mpp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            auto node= p.first;
            auto line = p.second;
            //if(mpp.find(line)==mpp.end()){
                mpp[line]= node->data;
            //}
            if(node->left){
                q.push({node->left, line-1});
            }
            if(node->right){
                q.push({node->right, line+1});
            }
        }
        for(auto p:mpp){
            ans.push_back(p.second);
        }
        return ans;
    }
};