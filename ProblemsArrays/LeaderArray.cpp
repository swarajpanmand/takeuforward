class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        int max = arr[n - 1];
        vector<int> result;
        result.push_back(arr[n - 1]);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max) {
                max = arr[i];
                result.push_back(arr[i]);
            }
        }
        // The leaders are collected in reverse order, so reverse the result
        reverse(result.begin(), result.end());
        return result;
    }
};
