class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<k){
            reverse(s.begin(),s.end());
            return s;
        }
        
        int i=0;
        int j=i+k-1;
        while(j<s.size()){
            int temp1=i;
            int temp2=j;
            while(temp1<=temp2){
                swap(s[temp1],s[temp2]);
                temp1++;
                temp2--;
            }
            i+=2*k;
            j+=2*k;
        }
        if(i<s.size()){
            int temp1=i;
            int temp2=min(i+k-1,(int)s.size()-1);
            while(temp1<temp2){
                swap(s[temp1],s[temp2]);
                temp1++;
                temp2--;
            }
        }
        return s;
    }
};