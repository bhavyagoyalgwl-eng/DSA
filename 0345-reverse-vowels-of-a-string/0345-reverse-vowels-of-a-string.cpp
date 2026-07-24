class Solution {
public:
    bool isVowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U' ){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int low=0;
        int high=s.size()-1;
        while(low<=high){
            if(isVowel(s[low])==false){
                low++;
            }
            else if(isVowel(s[high])==false){
                high--;
            }
            else{
                swap(s[low],s[high]);
                low++;
                high--;
            }
        }
        return s;
    }
};