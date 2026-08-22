class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pref(nums.size());
        vector<int>sufp(nums.size());
        pref[0]=1;
        sufp[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            pref[i]=pref[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            sufp[i]=sufp[i+1]*nums[i+1];
        }
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=pref[i]*sufp[i];
        }
        return ans;
    }   
};