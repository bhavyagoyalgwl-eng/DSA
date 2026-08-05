class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end());
        unordered_map<int,int>m;
        int r=1;
        for(int x:s){
            m[x]=r;
            r++;
        }
        vector<int>ans;
        for(int x:arr){
            ans.push_back(m[x]);
        }
        return ans;
    }
};