#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1 || n==0){
        cout<<"Not Prime";
        return 0;
    }
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
}