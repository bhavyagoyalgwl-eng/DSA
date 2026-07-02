class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>row(m);
        vector<int>col(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    if(row[i]==0){
                        row[i]++;
                    }
                    if(col[j]==0){
                        col[j]++;
                    }
                }
            }
        }
        for(int k=0;k<m;k++){
            if(row[k]>0){
                    for(int j=0;j<n;j++){
                        matrix[k][j]=0;
                    }
                
            }
        }
        for(int k=0;k<n;k++){
            if(col[k]>0){
                    for(int i=0;i<m;i++){
                        matrix[i][k]=0;
                    }
                
            }
        }

    }
};