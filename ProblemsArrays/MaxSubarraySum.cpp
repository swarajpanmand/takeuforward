class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n =nums.size();
        // int maxi=INT_MIN;
        // for(int i=0; i<n;i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];
        //         maxi= max(sum, maxi);
        //     }
        // }
        // return maxi;

        int n =nums.size();
        int current_sum = nums[0];
        int max_sum = nums[0];
        for(int i=1; i<n;i++){
            current_sum = max(nums[i], current_sum+nums[i]);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};