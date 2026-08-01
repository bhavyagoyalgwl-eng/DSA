class Solution {
public:
    int countSegments(string s) {
        int index=0;
        int ans=0;
        while(index<s.size()){
            while(index<s.size()  && s[index]==' ' ){
                index++;
            }
            if(index==s.size()){
            break;
            }
            while(index<s.size() && s[index]!=' '){
                index++;
            }
            ans++;
            
            
            
        }
        return ans;
        
    }
};