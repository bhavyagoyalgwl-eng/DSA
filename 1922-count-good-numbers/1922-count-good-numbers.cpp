class Solution {
public:
    long long power(long long a,long long b){
        if(b==0){
            return 1;
        }
        if(b==1){
            return a;
        }

        long long half=power(a,b/2);
        half=(half*half)%1000000007;
        if(b%2==0){
            return half;
            
        }
        else{
            return (a*half)%1000000007;
        }

    }
    int countGoodNumbers(long long n) {
         long long even=(n+1)/2;
         long long odd=n/2;
         int MOD=1000000007;
         return (power(5,even)*power(4,odd))%MOD;
    }
};