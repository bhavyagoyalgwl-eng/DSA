class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(auto &it:knowledge){
            mp[it[0]]=it[1];
        }
        int index=0;
        string ans="";
        while(index<s.size()){
            if(s[index]=='('){
                index++;
                string key="";
                while(s[index]!=')'){
                    key.push_back(s[index]);
                    index++;
                }
            
            index++;
            if(mp.find(key)!=mp.end()){
                ans+=mp[key];
            }
            else{
                ans+='?';
            }
            }
            else{
                ans.push_back(s[index]);
                index++;
            }
            
        }
        return ans;
    }
};