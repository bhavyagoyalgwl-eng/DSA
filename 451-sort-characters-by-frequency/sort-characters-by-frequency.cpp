class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<char,int>>vec(m.begin(),m.end());
        sort(vec.begin(),vec.end(),[](const auto &a, const auto &b){
            return a.second>b.second;
        });
        string t="";
        for(int i=0;i<vec.size();i++){
            while(vec[i].second>0){
                t+=vec[i].first;
                vec[i].second--;
            }
        }
        return t;
    }
};