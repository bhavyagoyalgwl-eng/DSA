class Solution {
public:
    bool isSubsequence(string s, string t) {
        int low1=0;
        int low2=0;
        while(low1<s.size() && low2<t.size()){
            if(s[low1]!=t[low2]){
                low2++;
            }
            else{
                low1++;
                low2++;
            }
        }
       return low1==s.size();        
    }
};