class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>ans(nums.size());
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);
            ans[i]=maximum;
        }
        int minimum=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            minimum=min(minimum,nums[i]);
            ans[i]-=minimum;
        }
        int idx=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(ans[i]<=k) idx=min(idx,i);
        }
        if(idx==INT_MAX) return -1;
        return idx;
    }
};