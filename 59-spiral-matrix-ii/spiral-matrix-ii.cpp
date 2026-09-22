class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int i=minc;i<=maxc;i++){
                arr[minr][i]=count;
                count++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            //down
            for(int i=minr;i<=maxr;i++){
                arr[i][maxc]=count;
                count++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            //left
            for(int i=maxc;i>=minc;i--){
                arr[maxr][i]=count;
                count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            //up
            for(int i=maxr;i>=minr;i--){
                arr[i][minc]=count;
                count++;
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
                        
        }
        return arr;
    }
};