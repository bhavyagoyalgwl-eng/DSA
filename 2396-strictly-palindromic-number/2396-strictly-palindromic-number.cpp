class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int temp=n-2;
        int base=2;
        while(base<=temp){
            int number=n;
            string t="";
            while(number>0){
                t+=number%base;
                number/=base;
            }
            reverse(t.begin(),t.end());
            int low=0;
            int high=t.size()-1;
            while(low<high){
                if(t[low]!=t[high]){
                    return false;
                }
                low++;
                high--;
            }
            base++;
         }
         return true;
    }
};