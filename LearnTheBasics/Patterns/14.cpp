#include<stdio.h>;
using namespace std;

int main(){
    for(int i =0; i<5; i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}