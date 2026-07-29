class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        int carry=0;
        string t3="";
        while(n1>=0 && n2>=0){
            int t1=num1[n1]-'0';
            int t2=num2[n2]-'0';
            
            if(t1+t2+carry>=10){
             t3=to_string(t1+t2+carry-10);
                carry=1;
               
            }
            else if(t1+t2+carry<10){
                
             t3=to_string(t1+t2+carry);
             carry=0;
            }
           
            
            ans+=t3;
            n1--;
            n2--;
        }
        while(n1>=0){
            if(carry==1){
                if(num1[n1]-'0'+carry>=10){
                t3=to_string(num1[n1]-'0'+carry-10);
               ans+=t3;
               n1--;
               carry=1;
                }
                else{
                t3=to_string(num1[n1]-'0'+carry);
               ans+=t3;
               n1--;
               carry=0;
                }
            }
            else{
            ans+=num1[n1];
            n1--;
            }
        }
        while(n2>=0){
            if(carry==1){
                if(num2[n2]-'0'+carry>=10){
                t3=to_string(num2[n2]-'0'+carry-10);
               ans+=t3;
               n2--;
               carry=1;
                }
                else{
                t3=to_string(num2[n2]-'0'+carry);
               ans+=t3;
               n2--;
               carry=0;
                }
               

            }
            else{
            ans+=num2[n2];
            n2--;
            }
        }
        if(carry==1){
            ans+='1';
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
    
};