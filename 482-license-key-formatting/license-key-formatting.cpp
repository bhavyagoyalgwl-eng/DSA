class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                continue;
            }
            else{
                if(s[i]>='a' && s[i]<='z'){
                    ans+=s[i]-32;
                }
                else{
                    ans+=s[i];
                }
            }
        }
        
        
        
        int temp=k;
        int firstgroup=ans.size()%k;
        if(firstgroup==0) firstgroup=k;
        
        int index=firstgroup+1;
        if(firstgroup<ans.size()){
            ans.insert(ans.begin()+firstgroup,'-');
        }
        while(index<ans.size()){
            while(temp>0){
                index++;
                temp--;

            }
            if(index<ans.size()){
                ans.insert(ans.begin()+index,'-');

            }
            index++;
            temp=k;

        }
        return ans;
    }
};