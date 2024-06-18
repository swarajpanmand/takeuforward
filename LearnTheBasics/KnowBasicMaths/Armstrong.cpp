#include<bits/stdc++.h>;
using namespace std;

int main()
{
    int n,y;
    cin>>n;
    int sum =0;
    int m = n;
    
    while(m>0){
        y = m%10;
        sum = sum + (y*y*y);
        m = m/10;
    }
    if(sum == n){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}