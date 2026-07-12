class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int>m;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]=='V' && i!=0 && s[i-1]=='I'){
                m["IV"]++;
                i=i-2;
            }
            else if(s[i]=='X' && i!=0 && s[i-1]=='I'){
                m["IX"]++;
                i=i-2;
            }
            else if(s[i]=='L' && i!=0 && s[i-1]=='X'){
                m["XL"]++;
                i=i-2;
            }
            else if(s[i]=='C' && i!=0 && s[i-1]=='X'){
                m["XC"]++;
                i=i-2;
            }
            else if(s[i]=='D' && i!=0 && s[i-1]=='C'){
                m["CD"]++;
                i=i-2;
            }   
            else if(s[i]=='M' && i!=0 && s[i-1]=='C'){
                m["CM"]++;
                i=i-2;
            }
            else{
                string t="";
                t+=s[i];
                m[t]++;
                i--;
                t="";
            }     
        }
        int sum=0;
        for(auto p:m){
                        if(p.first=="IV"){
                sum+=(p.second*4);
            }
                        else if(p.first=="IX"){
                sum+=(p.second*9);
            }
                        else if(p.first=="XL"){
                sum+=(p.second*40);
            }
                        else if(p.first=="XC"){
                sum+=(p.second*90);
            }
                        else if(p.first=="CD"){
                sum+=(p.second*400);
            }
                        else if(p.first=="CM"){
                sum+=(p.second*900);
            }
                        else if(p.first=="I"){
                sum+=(p.second*1);
            }
                        else if(p.first=="V"){
                sum+=(p.second*5);
            }
                        else if(p.first=="X"){
                sum+=(p.second*10);
            }
                        else if(p.first=="L"){
                sum+=(p.second*50);
            }
                        else if(p.first=="C"){
                sum+=(p.second*100);
            }
                        else if(p.first=="D"){
                sum+=(p.second*500);
            }
                        else if(p.first=="M"){
                sum+=(p.second*1000);
            }

                     

        }
        return sum;
    }
};