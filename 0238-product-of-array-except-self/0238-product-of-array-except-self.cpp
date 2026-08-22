class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        
        for(int i=0;i<nums.size();i++){
            if(i==0) ans[i]=1;
            else ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=suffix;
            suffix*=nums[i];
             
        }
        
        
        return ans;
    }   
};