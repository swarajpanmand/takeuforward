#include<set>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        // set<int> s(nums.begin(), nums.end());
        // nums.assign(s.begin(), s.end());
        // //vector<int> nums(s.begin(), s.end());
        // return nums.size();

        int j=1;
        for(int i = 1; i<n;i++){
            if(nums[i-1]!=nums[i]){
                nums[j]= nums[i];
                j++;
            }
        }
        return j;
    }
};































































