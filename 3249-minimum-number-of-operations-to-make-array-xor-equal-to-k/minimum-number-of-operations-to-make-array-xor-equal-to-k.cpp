class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor_total=0;
        for(int i=0;i<nums.size();i++){
            xor_total^=nums[i];
        }
        int diff=xor_total^k;
        int ans=0;
        while(diff>0){
            diff&=diff-1;
            ans++;
        }
        return ans;
    }
};