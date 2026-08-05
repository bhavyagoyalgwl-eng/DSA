class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int ans=0;
        for(int i=0;i<temp.size()-1;i=i+2){
            ans+=min(temp[i],temp[i+1]);
        }
        return ans;

    }
};