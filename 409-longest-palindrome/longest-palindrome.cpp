class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>freq(52);
        for(int i=0;i<s.size();i++){
            int val=s[i];
            if(val>=97){
                freq[s[i]-'a']++;
            }
            else{
                freq[s[i]-'A'+26]++;
            }
            
        }
        int ans=0;
        for(int i=0;i<freq.size();i++){
            if(freq[i]%2==0){
                ans+=freq[i];
            }
            else{
                ans+=(freq[i]-1);
            }
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]%2==1){
                ans++;
                break;
            }
        }
        return ans;
    }
};