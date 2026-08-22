class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int noz=0;
            int product=1;
            int p2=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) noz++;
            product*=nums[i];
            if(nums[i]!=0) p2*=nums[i];
        }
        if(noz>1) p2=0;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) ans[i]=p2;
            else ans[i]=product/nums[i];
        }
        
        return ans;
    }
};