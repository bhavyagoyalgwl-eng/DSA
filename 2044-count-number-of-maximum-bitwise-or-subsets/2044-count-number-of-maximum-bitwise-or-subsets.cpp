class Solution {
public:
    int ans=0;
    void solve(vector<int>&nums,int temp,int i,int maximum){
        if(i==nums.size()){
            if(temp==maximum){
                ans++;
            }
            return;
        }
        solve(nums,temp|nums[i],i+1,maximum);
        solve(nums,temp,i+1,maximum);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        
        int maximum=nums[0];
        for(int i=1;i<nums.size();i++){
          maximum|=nums[i];  
            
        }
       
        solve(nums,0,0,maximum);
        return ans;
    }
};