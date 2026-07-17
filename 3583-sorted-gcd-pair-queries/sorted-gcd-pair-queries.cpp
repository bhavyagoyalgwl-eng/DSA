class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        // vector<int>gcdPairs;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         int x=gcd(nums[i],nums[j]);
        //         gcdPairs.emplace_back(x);
        //     }
        // }
        // sort(gcdPairs.begin(),gcdPairs.end());
        // vector<int>ans(queries.size());
        // for(int i=0;i<queries.size();i++){
        //     ans[i]=gcdPairs[queries[i]];
        // }
        // return ans;

        int maximum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maximum=max(maximum,nums[i]);
        }
        vector<long long>freq(maximum+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<long long>cnt(maximum+1);
        for(int g=1;g<=maximum;g++){
            for(int multiple=g;multiple<=maximum;multiple+=g){
                cnt[g]+=freq[multiple];
            }
        }
        vector<long long>exact(maximum+1,0);
        for(int g=maximum;g>=1;g--){
            exact[g]=cnt[g]*(cnt[g]-1)/2;
            for(int multiple=2*g;multiple<=maximum;multiple+=g){
                exact[g]-=exact[multiple];
            }
        }
        vector<long long>prefix(maximum+1,0);
        for(int g=1;g<=maximum;g++){
            prefix[g]=prefix[g-1]+exact[g];
        }
        vector<int>ans;
        for(long long q:queries){
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }
        return ans;
    }
};