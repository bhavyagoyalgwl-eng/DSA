class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_sum=0;
        for(int i=0;i<nums.size();i++){
            xor_sum^=nums[i];
        }
        int temp=xor_sum;
        int index=0;
        while((temp&1)!=1){
            index++;
            temp>>=1;
        }
        int temp2=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if((num>>index)&1) temp2^=num;
        }
        return {temp2,xor_sum^temp2};
    }
};