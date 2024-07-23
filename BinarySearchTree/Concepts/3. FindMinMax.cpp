class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if (root == nullptr) {
            return -1; // or any other value to indicate an empty tree
        }
        
        // Traverse to the leftmost node
        while (root->left != nullptr) {
            root = root->left;
        }
        
        // Return the value of the leftmost node
        return root->data;
    }
};