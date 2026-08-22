class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int index=0;
        int ans=INT_MIN;
        while(index<satisfaction.size()){
            int sum=0;
            int temp=1;
            for(int i=index;i<satisfaction.size();i++){
                sum+=satisfaction[i]*temp;
                temp++;
            }
            index++;
            ans=max(ans,sum);
        }
       return max(0,ans);
    }
};