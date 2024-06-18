#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n=3;
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
    for(int i=0; i<n-2; i++){
        printf("\n%c", '*');
        for(int j=0; j<n-2; j++){
            printf(" ");
        }
        printf("%c", '*');
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
}