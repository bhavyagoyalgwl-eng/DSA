class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans(2);
        int L=area;
        int W=1;
        while(L>=W){
            if(area==L*W){
                ans[0]=L;
                ans[1]=W;
            }
            W++;
            L=area/W;
        }
        return ans;
       
    }
};