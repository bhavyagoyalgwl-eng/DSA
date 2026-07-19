class Solution {
public:
    string smallestSubsequence(string s) {
        if(s.size()==0){
            return "";
        }
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int pos=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<s[pos]){
                pos=i;
            }
            freq[s[i]-'a']--;
            
            if(freq[s[i]-'a']==0){
                break;
            }
            }
            char first=s[pos];
            string remaining="";
            for(int i=pos+1;i<s.size();i++){
                if(s[i]!=first){
                    remaining+=s[i];
                }
            }
            
        
        return first+smallestSubsequence(remaining);
    }
};