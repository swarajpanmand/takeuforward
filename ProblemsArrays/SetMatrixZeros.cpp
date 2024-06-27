class Solution {
public:

    // void markRow(vector<vector<int>> &matrix, int n, int m, int i){
    //     for(int j=0; j<m; j++){
    //         if(matrix[i][j] != 0){
    //             matrix[i][j] = -1;
    //         }
    //     }
    // }

    // void markCol(vector<vector<int>> &matrix, int n ,int m , int j){
    //     for(int i=0; i<n ; i++){
    //         if(matrix[i][j]!=0){
    //             matrix[i][j] = -1;
    //         }
    //     }
    // }

    // void setZeroes(vector<vector<int>>& matrix) {
    //     int n = matrix.size();
    //     int m = matrix[0].size();
    //     for(int i=0; i<n;i++){
    //         for(int j=0; j<m; j++){
    //             if(matrix[i][j]==0){
    //                 markRow(matrix, n, m, i);
    //                 markCol(matrix, n, m, j);
    //             }
    //         }
    //     }

    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<m ; j++)
    //         {
    //             if(matrix[i][j]==-1){
    //                 matrix[i][j]=0;
    //             }
    //         }
    //     }
    // }
    


    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        // vector<int> row(n,0);
        // vector<int> col(m,0);
        int col0=1;

        for(int i=0; i<n;i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    // row[i]=1;
                    // col[j]=1;
                    matrix[i][0]=0;
                    if(j!=0) matrix[0][j] = 0;
                    else col0=0;
                }
            }
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; i<m; j++){
        //         if(row[i] || col[j]){
        //             matrix[i][j] =0;
        //         }
        //     }
        // }

        for(int i=1; i<n; i++){
            for(int j=1; i<m; j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }

        if(matrix[0][0] ==0){
            for(int j=0; j<m; j++){
                matrix[0][j]=0;
            }
        }
        if(col0 ==0){
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};