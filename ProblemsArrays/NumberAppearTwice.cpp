class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        unordered_map<int, int> a;
        for(auto x:nums){
            a[x]++;
        }
        for(auto z:a){
            if(z.second == 1) return z.first;
        }
        return -1;
    }
};