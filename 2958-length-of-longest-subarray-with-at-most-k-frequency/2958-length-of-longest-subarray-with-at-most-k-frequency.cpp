class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        int result=0;
        unordered_map<int,int>m;
        while(high<nums.size()){
            
                m[nums[high]]++;
                high++;
                
            
            while(m[nums[high-1]]>k){
                m[nums[low]]--;
                low++;
            }
            result=max(result,high-low);
            
        }
        return result;
    }
};