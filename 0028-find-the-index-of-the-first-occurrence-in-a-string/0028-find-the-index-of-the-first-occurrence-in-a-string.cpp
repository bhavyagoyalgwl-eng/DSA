class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int low1=0;
        int low2=0;
      
        while(low1<n && low2<m){
            int start=low1;
            while(low1<n && low2<m && haystack[low1]==needle[low2] ){
                low1++;
                low2++;
            }
            if(low2==m){
                return start;
            }
            else{
                low2=0;
                low1=start+1;
            }

        }
        return -1;
    }
};