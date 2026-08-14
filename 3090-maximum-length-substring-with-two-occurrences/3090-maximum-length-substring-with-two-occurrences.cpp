class Solution {
public:
    int maximumLengthSubstring(string s) {
         vector<int>freq(26);
         int low=0;
         int high=0;
         int ans=0;
         while(high<s.size()){
            
                freq[s[high]-'a']++;
                high++;
            while(freq[s[high-1]-'a']>2){
                freq[s[low]-'a']--;
                low++;
            }
            ans=max(ans,high-low);

            
         }
         return ans;
    }
};