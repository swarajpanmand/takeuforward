bool isLeaf(TreeNode<int>* node) {
    return !node->left && !node->right;
}

void addLeftBoundary(TreeNode<int>* root, vector<int> &result) {
    TreeNode<int>* curr = root->left;
    while(curr) {
        if(!isLeaf(curr)) result.push_back(curr->data);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRightBoundry(TreeNode<int>* root, vector<int> &result) {
    TreeNode<int>* curr = root->right;
    vector<int> temp;
    while(curr) {
        if(!isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for(int i = temp.size()-1; i >= 0; i--) {
        result.push_back(temp[i]);
    }
}

void addLeaves(TreeNode<int>* root, vector<int>& result) {
    if(isLeaf(root)) {
        result.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left, result);
    if(root->right) addLeaves(root->right, result);
}

vector<int> traverseBoundary(TreeNode<int> *root) {
    vector<int> result;
    if(!root) return result;
    if(!isLeaf(root)) result.push_back(root->data);
    addLeftBoundary(root, result);
    addLeaves(root, result);
    addRightBoundry(root, result);
    return result;
}