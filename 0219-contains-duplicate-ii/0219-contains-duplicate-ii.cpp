class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int>s;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(s.find(nums[j])!=s.end()) return true;
            s.insert(nums[j]);
            if(j-i>=k){
                s.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};