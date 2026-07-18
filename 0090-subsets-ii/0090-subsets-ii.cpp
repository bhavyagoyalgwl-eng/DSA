class Solution {
public:
    void helper(vector<int>nums,vector<int>temp,int n,int index,vector<vector<int>>&ans,bool flag){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        if(index==nums.size()-1){
            helper(nums,temp,n,index+1,ans,true);
            if(flag==true){
                temp.push_back(nums[index]);
                helper(nums,temp,n,index+1,ans,true);
            }
          
        }
        else{
            int a=nums[index];
            int b=nums[index+1];
            if(a==b){
                helper(nums,temp,n,index+1,ans,false);
            if(flag==true){
                temp.push_back(nums[index]);
                helper(nums,temp,n,index+1,ans,true);
            }
            }
            else{
                helper(nums,temp,n,index+1,ans,true);
            if(flag==true){
                temp.push_back(nums[index]);
                helper(nums,temp,n,index+1,ans,true);
            }
            }
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>>ans;
       vector<int>temp;
       int n=nums.size();
       helper(nums,temp,n,0,ans,true);
       return ans;
    }
};