class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
         
         int maximum=INT_MIN;
         for(int i=0;i<nums.size();i++){
            
            maximum=max(maximum,nums[i]);
         }
         vector<int>seive(maximum+1,1);
         seive[0]=0;
         seive[1]=0;
         for(int i=2;i<=sqrt(maximum);i++){
            for(int j=i*i;j<=maximum;j+=i){
                seive[j]=0;
            }
         }
         vector<int>primes;
         for(int i=0;i<seive.size();i++){
            if(seive[i]==1){
                primes.push_back(i);
            }
         }        
         vector<int>taken(primes.size());
         for(int i=0;i<nums.size();i++){
            for(int j=0;j<primes.size();j++){
                if(nums[i]%primes[j]==0) taken[j]++;
            }
         }
         int ans=0;
         for(int i=0;i<taken.size();i++){
            if(taken[i]>0) ans++;
         }
         return ans;
         
    }
};