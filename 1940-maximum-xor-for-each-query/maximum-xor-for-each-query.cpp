class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>ans(nums.size());
        vector<int>pref(nums.size());
        int temp=0;
        for(int i=0;i<nums.size();i++){
            pref[i]=nums[i]^temp;
            temp=pref[i];
        }
        int maximum=pow(2,maximumBit)-1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pref[nums.size()-1-i]^maximum;
        }
        return ans;
    }
};