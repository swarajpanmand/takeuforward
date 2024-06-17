#include <stdio.h>
using namespace std;

int main()
{
    for (int i = 4; i>=0; i--)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}