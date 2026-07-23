class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int n1=a.size()-1;
        int n2=b.size()-1;
        string t="";
        while(n1>=0 && n2>=0){
            if(carry+(a[n1]-'0')+(b[n2]-'0')==3){
                t+='1';
                carry=1;
                n1--;
                n2--;
            }
            else if(carry+(a[n1]-'0')+(b[n2]-'0')==2){
                t+='0';
                carry=1;
                n1--;
                n2--;
            }
            else if(carry+(a[n1]-'0')+(b[n2]-'0')==0){
                t+='0';
                carry=0;
                n1--;
                n2--;
            }
            else{
                t+='1';
                carry=0;
                n1--;
                n2--;
            }
        }
        while(n1>=0){
            if(carry+(a[n1]-'0')==3){
                t+='1';
                carry=1;
                n1--;
              
            }
            else if(carry+(a[n1]-'0')==2){
                t+='0';
                carry=1;
                n1--;
                
            }
            else if(carry+(a[n1]-'0')==0){
                t+='0';
                carry=0;
                n1--;
                
            }
            else{
                t+='1';
                carry=0;
                n1--;
               
            }
        }
        while(n2>=0){
            if(carry+(b[n2]-'0')==3){
                t+='1';
                carry=1;
             
                n2--;
            }

            else if(carry+(b[n2]-'0')==2){
                t+='0';
                carry=1;
                
                n2--;
            }
            else if(carry+(b[n2]-'0')==0){
                t+='0';
                carry=0;
                
                n2--;
            }
            else{
                t+='1';
                carry=0;
               
                n2--;
            }
        }
        if(carry==1) t+='1';
        reverse(t.begin(),t.end());
        return t;
    }
};