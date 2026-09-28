class Solution {
public:
    int maxDepth(string s) {
        int tempans=0;
        int maxans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                tempans++;
                maxans=max(maxans,tempans);
            }
            else if(s[i]==')'){
                tempans--;
            }
            
            
        }
        return maxans;
    }
};