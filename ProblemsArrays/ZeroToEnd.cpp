class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        if(nums.size()<2) return;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
            j++;
            }
            else if(j>0){
                int temp= nums[i];
                nums[i] = 0;
                nums[i-j] = temp;
            }
        }
      }
};