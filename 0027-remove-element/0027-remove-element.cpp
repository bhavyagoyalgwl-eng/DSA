class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<=j){
            if(nums[j]==val){
                j--;
                ans++;
            }
            else if(nums[i]==val){
                swap(nums[i],nums[j]);
                ans++;
                i++;
                j--;
            }
            else if(nums[i]!=val){
                i++;
            }
        }
        return nums.size()-ans;
    }
};