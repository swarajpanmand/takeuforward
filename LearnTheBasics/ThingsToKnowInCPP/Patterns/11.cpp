#include<stdio.h>;
using namespace std;

int main(){
    int n=1;
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            if(n==1){
                printf("1");
                n=0;
            }
            else{
                printf("0");
                n=1;
            }
        }
        printf("\n");
    }
}
