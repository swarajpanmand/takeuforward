#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", '*');
        }
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n -= 2;
        for (int j = 0; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    n = 2;
    for (int i = 4; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c", '*');
        }
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n += 2;
        for (int j = i; j > 0; j--)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    
}