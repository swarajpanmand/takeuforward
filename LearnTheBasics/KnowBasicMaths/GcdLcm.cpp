//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long > ans(2);
        long long ogA=A , ogB = B;
        while(A>0 && B>0){
            if(A>B){
                A = A%B;
            }
            else{
               B = B%A;
            }
        }
        if(A==0){
            ans[1] = B;
        }
        else{
            ans[1]= A;
        }
        ans[0] = (ogA*ogB)/ans[1];
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends