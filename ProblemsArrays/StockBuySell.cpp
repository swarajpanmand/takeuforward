class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int min_num =INT_MAX;
        for(int i=0; i<n; i++){
            min_num=min(min_num, nums[i]);
            max_sum= max(max_sum, nums[i]-min_num);
        }
        
        
        return max_sum;

        // int buy = prices[0];
        // int profit = 0;
        // for (int i = 1; i < prices.size(); i++) {
        //     if (prices[i] < buy) {
        //         buy = prices[i];
        //     } else if (prices[i] - buy > profit) {
        //         profit = prices[i] - buy;
        //     }
        // }
        // return profit;
    }
};