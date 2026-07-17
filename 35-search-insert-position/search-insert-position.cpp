class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        bool flag=false;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                flag=true;
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }

        }
        if(flag){
            return ans;
        }
        else{
            return low;
        }
        return -1;
    }
};