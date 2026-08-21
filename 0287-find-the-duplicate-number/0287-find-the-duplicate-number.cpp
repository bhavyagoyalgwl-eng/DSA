class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int index=0;
        while(index<nums.size()){
            if(nums[index]!=index+1 && nums[index]==nums[nums[index]-1]){
                return nums[index];
            }
            else if(nums[index]!=index+1){
                swap(nums[index],nums[nums[index]-1]);
            }
            else{
                index++;
            }
        }
        return -1;
    }
};