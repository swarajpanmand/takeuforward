#include <stdio.h>;
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 'A' + j);
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }
}