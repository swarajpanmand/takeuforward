#include <stdio.h>;
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        // for (int j = 0; j <= i; j++)
        // {
        //     printf("%c ", 'A'+j);
        // }
        for(char ch = 'A'; ch<='A'+i; ch++)
        {
            printf("%c ", ch+4-i);
        }
        printf("\n");
    }
}