class Solution {
public:
    int search(vector<int>& nums, int target) {
      if(nums.size()==1){
        if(nums[0]==target){
            return 0;
        }
        else{
            return -1;
        }
      }
      if(nums.size()==2){
        if(nums[0]==target){
            return 0;
        }
        if(nums[1]==target){
            return 1;
        }
        else{
            return -1;
        }
      }

      int low=0;
      int high=nums.size()-1;
      int index=-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(mid==0){
            low=mid+1;
        }
        if(mid==nums.size()-1){
            high=mid-1;
        }
        mid=low+(high-low)/2;
        if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
            index=mid;
            break;
        }
        else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            index=mid+1;
            break;
        }
        else if(nums[mid]>nums[high]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
      if(index==-1){
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
      }
      else{
        if(target>=nums[0] && target<=nums[index-1]){
        low=0;
        high=index-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        }
        else{
            low=index;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        }
        
        
        }
        return -1;
    }
};