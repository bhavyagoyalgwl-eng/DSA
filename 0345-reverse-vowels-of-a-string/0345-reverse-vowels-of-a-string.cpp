class Solution {
public:
    bool isVowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U' ){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        vector<char>freq;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                freq.push_back(s[i]);
            }
        }
        reverse(freq.begin(),freq.end());
        int index=0;
        string str=s;
        for(int i=0;i<s.size();i++){
            if(isVowel(str[i])){
                str[i]=freq[index];
                index++;
            }
        }
         return str;
    }
};