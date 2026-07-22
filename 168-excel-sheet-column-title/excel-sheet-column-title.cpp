class Solution {
public:
    string convertToTitle(int columnNumber) {
        string t="";
        while(columnNumber>0){
            columnNumber--;
            t+=(columnNumber%26)+'A';
            columnNumber/=26;
        }
        reverse(t.begin(),t.end());
        return t;
    }
};