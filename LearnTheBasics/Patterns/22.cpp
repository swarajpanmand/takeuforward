#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int n = 9;
    for (int i = n; i > 0; i--)
    {

        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("%d ", i);
        }

        for (int j = n; j > i; j--)
        {
            printf("%d ", n - j + i + 1);
        }
        printf("\n");
    }
    for(int i =2; i<=n;i++){
        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("%d ", i);
        }
        for (int j = n; j > i; j--)
        {
            printf("%d ", n - j + i + 1);
        }
        printf("\n");
    }
    
}