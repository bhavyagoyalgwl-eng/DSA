class Solution {
public:
    bool checkRecord(string s) {
        int A=0;
        char LastDay='a';
        int Late=0;
        for(int i=0;i<s.size();i++){
            if(Late>=3 || A>=2){
                return false;
            }
            if(s[i]=='A'){
                A++;
                LastDay='A';
                Late=0;
            }
            else if(s[i]=='L' && LastDay!='L'){
                LastDay='L';
                Late++;
            }
            else if(s[i]=='L' && LastDay=='L'){
                LastDay='L';
                Late++;
            }
            else{
                LastDay='P';
                Late=0;
            }

        }
        return (Late<3 && A<2);

    }
};