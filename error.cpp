#include<bits/stdc++.h>;
#include<math.h>;
#include<string.h>;
#include<iostream>;
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int len = numberOfDigits(x);
        String str = to_string(x);
        if(str[0]=="-"){
            for(int i=1; i<len; i++){
                result= x%10 + result;
                result= result*10;
            }
            result = result/10;
            return -result;
        }
    }
};

int main(){
    int x;
    Solution s;
    cin>>x;
    cout<<s.reverse(x);
}