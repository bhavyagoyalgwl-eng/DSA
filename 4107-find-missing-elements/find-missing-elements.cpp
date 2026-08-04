class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minimum=INT_MAX;
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            minimum=min(minimum,nums[i]);
            maximum=max(maximum,nums[i]);
        }
        vector<int>freq(maximum-minimum+1);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]-minimum]++;
        }
        vector<int>ans;
        for(int i=0;i<=(maximum-minimum);i++){
            if(freq[i]==0){
                ans.push_back(i+minimum);
            }
        }
        return ans;
    }
};