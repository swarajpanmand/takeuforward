//find the smallest element in the array which is greater than to X if not found return -1  

A[] = {1,4,4,4,4,9,9,10,11};

int ind = upper_bound(A, A+n, X) - A;


if(ind<n) return A[ind];
else return -1;

X = 4 //5
X = 2 //1
X =0 //1