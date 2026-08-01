class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,string>mp={
            {1,"Gold Medal"},{2,"Silver Medal"},{3,"Bronze Medal"}
        };
        vector<pair<int,int>>v(score.size());
        for(int i=0;i<score.size();i++){
            v[i].first=score[i];
            v[i].second=i;
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int count=1;
        vector<string>ans(score.size());
        for(int i=0;i<v.size();i++){
            int idx=v[i].second;
            if(count<=3){
                ans[idx]=mp[count];
                count++;
            }
            else{
                ans[idx]=to_string(count);
                count++;
            }
        }
        return ans;
    }
};