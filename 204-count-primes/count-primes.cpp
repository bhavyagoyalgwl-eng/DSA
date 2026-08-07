class Solution {
public:
    int countPrimes(int n) {
        
        vector<long long>freq(n+1,1);
        for(long long i=2;i<=n;i++){
            if(freq[i]==0){
                continue;
            }
            for(long long j=i*i;j<=n;j+=i){
                freq[j]=0;
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(freq[i]==1){
                ans++;
            }
        }
        return ans;
    }
};