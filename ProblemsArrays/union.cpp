//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of element
        // int i=0, j=0;
        // vector<int> result(max(n,m));
        // int k=0;
        // while(i<n && j<m){
        //     if(arr1[i]==arr2[j]){
        //         result[k]=arr1[i];
        //         i++;
        //         j++;
        //         k++;
        //     }
        //     else if(arr1[i]<arr2[j]){
        //         result[k]=arr1[i];
        //         i++;
        //         k++;
        //     }
        //     else{
        //         result[k]= arr2[j];
        //         k++;
        //     }
        // }
        // while(i<n){
        //     result[k]= arr1[i];
        //     i++;
        //     k++;
        // }
        // while(j<m){
        //     result[k] = arr2[j];
        //     j++;
        //     k++;
        // }
        // return result;
        
        set<int> s;
        for(int i=0; i<n; i++) s.insert(arr1[i]);
        for(int i=0; i<m; i++) s.insert(arr2[i]);
        vector<int> result(s.begin(), s.end());
        return result;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends