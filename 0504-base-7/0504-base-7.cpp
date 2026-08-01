class Solution {
public:
    string convertToBase7(int num) {
        int temp=abs(num);
        if(temp==0){
            return "0";
        }
        string ans="";
        
        while(temp/7>0){
            
            int rem=temp%7;
            ans+='0'+rem;
            temp/=7;
        }
        ans+='0'+temp;
        if(num<0){
            ans+='-';
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};