#include<stdio.h>;
using namespace std;

int main(){
    for(int i =0; i<5; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", 'A'+i);
        }
        printf("\n");
    }
}