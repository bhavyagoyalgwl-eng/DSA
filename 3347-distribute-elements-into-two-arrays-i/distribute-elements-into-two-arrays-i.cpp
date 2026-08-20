class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans1={nums[0]};
        vector<int>ans2={nums[1]};
        for(int i=2;i<nums.size();i++){
            if(ans1.back()>ans2.back()){

                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int i=0;i<ans1.size();i++){
            ans.push_back(ans1[i]);
        }
        for(int i=0;i<ans2.size();i++){
            ans.push_back(ans2[i]);
        }
        return ans;
    }
};