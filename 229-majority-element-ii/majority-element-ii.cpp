class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m.insert({nums[i],1});
            }
            else{
                m[nums[i]]++;
            }
        }

        for(auto it:m){
            if(it.second>floor(n/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};