class Solution {
public:
    // long long gcd(long long a,long long b){
    //     long long gcd=0;
    //     for(long long i=1;i<=min(a,b);i++){
    //         if(a%i==0 && b%i==0){
    //             if(i>gcd){
    //                 gcd=i;
    //             }
    //         }
    //     }
    //     return gcd;
    // }
    long long gcdSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>mx(n);
        
        long long maximum=INT_MIN;
        for(int i=0;i<n;i++){
            mx[i]=max((long long)nums[i],maximum);
            maximum=mx[i];
        }
        vector<int>prefixGCD(n);
        for(int i=0;i<n;i++){
            prefixGCD[i]=gcd(mx[i],nums[i]);
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        int low=0;
        int high=n-1;
        long long sum=0;
        while(low<high){
            sum+=gcd(prefixGCD[low],prefixGCD[high]);
            low++;
            high--;
        }
        return sum;
    }
};