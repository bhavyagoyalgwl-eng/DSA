class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        int temp1=r;
        int temp2=c;
        vector<vector<int>>ans(r,vector<int>(c));
        int idx1=0;
        int idx2=0;
        int idx3=0;
        int idx4=0;
        while(idx1<temp1 && idx3<m && idx2<temp2 && idx4<n){
            
            ans[idx1][idx2]=mat[idx3][idx4];
            idx2++;
            if(idx2==temp2){
                idx1++;
                idx2=0;
            }
            idx4++;
            if(idx4==n){
                idx3++;
                idx4=0;
            }
            
            

        }
        return ans;
    }
};