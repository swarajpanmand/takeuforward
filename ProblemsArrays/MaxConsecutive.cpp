class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        if(nums.size()<1) return count;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i]==1){
                count++;
             if(maximum<count) maximum = count;
            }
            else count=0;
        }
        return maximum;

    }
};