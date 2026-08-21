class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int index=0;
        while(index<nums.size()){
            if(nums[index]!=index+1){
                if(nums[index]==nums[nums[index]-1]){
                    index++;
                }
                else{
                    swap(nums[index],nums[nums[index]-1]);
                }
            }
            else{
                index++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};