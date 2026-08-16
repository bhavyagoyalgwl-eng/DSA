class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<stones.size();i++){
            int temp=stones[i]%3;
            if(temp==0){
                cnt0++;
            }
            else if(temp==1){
                cnt1++;
            }
            else if(temp==2){
                cnt2++;
            }
        }
        if(cnt0%2==0){
            return cnt1>0 && cnt2>0;
        }
        return cnt2-cnt1>2 || cnt1-cnt2>2;
    }
};