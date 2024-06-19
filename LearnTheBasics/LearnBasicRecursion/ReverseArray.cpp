#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

void reverseArray2(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end - 1]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray2(arr, 0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}