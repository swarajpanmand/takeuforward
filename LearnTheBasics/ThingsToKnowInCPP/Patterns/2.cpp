#include<stdio.h>
using namespace std;

int main(){
    for(int i= 1; i<6; i++){
        for(int j=1; j<=i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }
}