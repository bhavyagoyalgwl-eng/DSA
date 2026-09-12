class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>freq(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int maximum=INT_MIN;
        for(int i=0;i<=nums.size();i++){
            maximum=max(maximum,freq[i]);
        }
        for(int i=0;i<maximum;i++){
            ans.push_back({});
        }
        for(int i=1;i<=nums.size();i++){
            int count=freq[i];
            for(int j=0;j<count;j++){
                ans[j].push_back(i);
            }
        }
        return ans;
    }
};