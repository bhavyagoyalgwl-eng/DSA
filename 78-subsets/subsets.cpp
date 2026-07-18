class Solution {
public:
    void helper(vector<int>nums,vector<int>help,int n,int index,vector<vector<int>>&ans){
        if(index==n){
            ans.push_back(help);
            return;
        }
        helper(nums,help,n,index+1,ans);
        help.push_back(nums[index]);
        helper(nums,help,n,index+1,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>help;
        vector<vector<int>>ans;
        helper(nums,help,nums.size(),0,ans);
        return ans;
    }
};