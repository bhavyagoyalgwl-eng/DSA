class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int flips=0;
        int i=0;
        int j=0;
        int maxLen=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==1) j++;
            else if(nums[j]==0){
                if(flips<k){flips++;j++;}
                else{
                    maxLen=max(maxLen,j-i);
                    while(nums[i]!=0){
                        i++;
                    }
                    i++;
                    flips--;
                }
            }
            maxLen=max(maxLen,j-i);
        }
        
        return maxLen;
    }
};