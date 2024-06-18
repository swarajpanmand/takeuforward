#include<stdio.h>
using namespace std;

int main(){
    int n =6;
    for(int i= 1; i<5; i++){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=0;j<n;j++){
            printf(" ");
        }
        n= n-2;
        for(int j=i; j>=1; j--){
            printf("%d",j);
        }

        printf("\n");
    }
}