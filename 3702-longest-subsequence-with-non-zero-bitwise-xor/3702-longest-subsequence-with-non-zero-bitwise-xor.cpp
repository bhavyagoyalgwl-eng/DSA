class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        bool zero=true;
        for(int i=0;i<nums.size();i++){
            xr^=nums[i];
            if(nums[i]>0){
                zero=false;
            }
        }
        if(xr!=0){
            return nums.size();
        }
        if(zero==false){
            return nums.size()-1;
        }
        return 0;

    }
};