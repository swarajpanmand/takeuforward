#include<stdio.h>;
using namespace std;

int main(){
    int n =1;
    for(int i=0; i<5;i++){
        for(int j=0; j<=i; j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}