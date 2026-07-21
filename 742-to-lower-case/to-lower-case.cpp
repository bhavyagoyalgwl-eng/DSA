class Solution {
public:
    string toLowerCase(string s) {
       for(int i=0;i<s.size();i++){
        int a=s[i];
        if(a>=65 && a<=90){
            s[i]=s[i]+32;
        }
       } 
       return s;
    }
};