class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        bool pair[2048]={false};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                pair[nums[i]^nums[j]]=true;
            }
        }
        vector<int>ans;
        for(int i=0;i<2048;i++){
            if(pair[i]==true){
                ans.push_back(i);
            }
        }
        bool triple[2048]={false};
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<nums.size();j++){
                triple[ans[i]^nums[j]]=true;
            }
        }
        int count=0;
        for(int i=0;i<2048;i++){
            if(triple[i]==true){
                count++;
            }
        }
        return count;
        
    }
};