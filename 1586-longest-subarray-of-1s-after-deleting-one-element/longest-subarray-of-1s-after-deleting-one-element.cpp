class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int countzero=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==1) j++;
            else if(nums[j]==0 && countzero==0){
                j++;
                countzero++;
                ans=max(ans,j-i-1);
            }
            else if(nums[j]==0 && countzero>0){
                while(nums[i]!=0){
                    i++;
                }
                i++;
                countzero--;
                

            }
            ans=max(ans,j-i-1);
        }
        return ans;
    }
};