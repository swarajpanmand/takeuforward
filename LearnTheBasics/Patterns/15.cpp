#include <stdio.h>;
using namespace std;

int main()
{
    for (int i = 5; i > 0; i--)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}