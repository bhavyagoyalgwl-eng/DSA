class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m=score.size();
        int n=score[0].size();
        int idx=0;
        while(idx<m-1){
            int maximum=INT_MIN;
       
            for(int i=idx;i<m;i++){
               
                maximum=max(maximum,score[i][k]);
            }
           
         
            for(int i=idx;i<m;i++){
                if(score[i][k]==maximum){
                    swap(score[i],score[idx]);
                    break;
                }

            }
            idx++;

        }
        return score;
    }
};