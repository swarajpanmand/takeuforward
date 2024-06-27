class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        set<int> s(nums.begin(), nums.end());
        int longest= 0, maxi=0;
        nums.assign(s.begin(), s.end());
        for(int i =0; i<n-1;i++){
            if(nums[i]==(nums[i+1]-1)){
                longest++;
                maxi=max(maxi, longest);
                continue;
            }
            longest=0;
        }
        return maxi+1;
    }
};