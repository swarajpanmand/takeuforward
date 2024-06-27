#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool cond= false;
        vector<int> arr = nums;
        vector<int> arr2 = nums;
        int n = nums.size();
        int temp = arr[n];
        for(int j=n-1; j>=0; j++)
        {
            for(int i = 0; i<n-1; i++){
                arr[i+1]=arr[i];
                arr[0] = arr[n-1];

            }
            for(int i=0; i<=i-1; i++){
                if(arr2[i]= arr2[i+1]){
                    int temp = arr2[i+1];
                    arr2[i + 1] = arr2[i];
                    arr2[i] = temp;
                }
            }
            if(arr2==arr) {cond=true; break;}
        }
        return cond;
        
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,4,5,1,2};
    cout<<s.check(nums);
    return 0;
}