class Solution {
public:
    bool isValid(string s) {
        
       
        stack<char>s2;
        int index=0;
        
        while(index<s.size()){
            if(s[index]=='(' || s[index]=='{' || s[index]=='['){
                s2.emplace(s[index]);
                
            }
            if(s[index]==')'){
            if(s2.empty() || s2.top()!='(') return false;
            s2.pop();
            }
            else if(s[index]=='}'){
            if(s2.empty() || s2.top()!='{') return false;
            s2.pop();
            }
            else if(s[index]==']'){
            if(s2.empty() || s2.top()!='[') return false;
             s2.pop();
            }
            index++;
            

        }
        return s2.empty();
        
    }
};