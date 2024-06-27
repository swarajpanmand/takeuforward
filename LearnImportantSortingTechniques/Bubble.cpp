void BubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwa = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwa = 1;
            }
        }
        if (didSwa == 0)
        {
            break;
        }
    }
}