class Solution {
public: 
        bool judgeSquareSum(int c) {
        int low=0;
        int high=sqrt(c);
       
        while(low<=high){
                long long sum=(long long)low*low + (long long)high*high;
                if(sum==c){
                    return true;
                }
                else if(sum<c){
                    low++;
                }
                else{
                    high--;
                }
        }
        return false;
    }
};