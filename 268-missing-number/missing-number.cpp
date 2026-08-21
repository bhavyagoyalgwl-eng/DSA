class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index=0;
        while(index<nums.size()){
            if(nums[index]==nums.size()) index++;
            else if(nums[index]!=index){
                swap(nums[index],nums[nums[index]]);
            }
            else{
                index++;
            }
        }
        int check=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=check){
                return check;
            }
            check++;

        }
        return nums.size(); 
    }
};