class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            if(nums[0]==0) return 1;
            if(nums[0] == 1) return 0;
        }
        int sum1 = (n*(n+1))/2;
        int sum2 =0;
        for(int i=0;i<n; i++){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};