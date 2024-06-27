void BubbleSort(int arr[], int n)
{
    if (n==1) return;
        for (int i = 0; i < n - 1; i++)
        { // i<=n-2
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    BubbleSort(arr, n - 1);
}