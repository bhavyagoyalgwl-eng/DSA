class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int index=0;
        while(index<nums.size()){
            if(nums[index]<=0 || nums[index]>nums.size() || nums[index]==nums[nums[index]-1]) index++;
            else if(nums[index]!=index+1){
                swap(nums[index],nums[nums[index]-1]);
            }
            else{
                index++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};