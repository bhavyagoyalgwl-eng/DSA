class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long temp=n;
        long long temp3=0;
        while(temp>0){
            int temp2=temp%10;
            if(temp2==0){
                temp/=10;
            }
            else{
            sum+=temp2;
            temp3*=10;
            temp3+=temp2;
            temp/=10;
            }
        }
        long long ans=0;
        while(temp3>0){
            ans*=10;
            ans+=(temp3%10);
            temp3/=10;
        }
    return ans*sum;
    }
};