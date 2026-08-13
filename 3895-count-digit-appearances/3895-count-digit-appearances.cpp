class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
                if(temp%10==digit){
                    ans++;
                }
                temp/=10;

            }
        }
        return ans;
    }
};