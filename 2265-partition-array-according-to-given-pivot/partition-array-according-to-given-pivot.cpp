class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lower;
        vector<int>upper;
        vector<int>equal;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                lower.push_back(nums[i]);
            }
            if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }
            if(nums[i]>pivot){
                upper.push_back(nums[i]);
            }
        }
        for(int i=0;i<lower.size();i++){
            ans.push_back(lower[i]);
        }
        for(int i=0;i<equal.size();i++){
            ans.push_back(equal[i]);
        }
        for(int i=0;i<upper.size();i++){
            ans.push_back(upper[i]);
        }
        return ans;
    }
};