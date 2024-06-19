#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = s;
        for(string s11 :s){
            if(s11>=65 && s11<=90 && s11>=97 && s11<=122) prinf(s11);
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isPalindrome(s)<<endl;
    }
    return 0;
}