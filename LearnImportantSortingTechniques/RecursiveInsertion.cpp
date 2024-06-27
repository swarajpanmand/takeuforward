void InsertionSort(int ar[],int i; int n){
    if(i==n) return;

    int j= i;
    while(j>0 && ar[j-1]>ar[j]){
        swap(ar[j], ar[j-1]);
        j--;
    }
    InsertionSort(ar,i+1 n-1);
}