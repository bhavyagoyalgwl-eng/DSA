class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum(nums.size());
        vector<int>rightsum(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0) leftsum[i]=0;
            else leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1) rightsum[i]=0;
            else rightsum[i]=rightsum[i+1]+nums[i+1];
        }
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=abs(leftsum[i]-rightsum[i]);
        }
        return ans;
    }
};