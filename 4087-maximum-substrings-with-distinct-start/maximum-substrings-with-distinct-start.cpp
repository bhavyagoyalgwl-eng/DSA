class Solution {
public:
    int maxDistinct(string s) {
        vector<int>freq(27);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<27;i++){
            if(freq[i]>0){
                ans++;
            }
        }
        return ans;
    }
};