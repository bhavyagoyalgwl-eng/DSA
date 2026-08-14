class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor_total=0;
        for(int i=0;i<nums.size();i++){
            xor_total^=nums[i];
        }
        int temp=k;
        int ans=0;
        int d1=0;
        int d2=0;
        while(temp>0 || xor_total>0){
            if(temp==0){
                 d1=0;
            }
            else if(temp>0){
                 d1=temp%2;
            }
            if(xor_total>0){
                 d2=xor_total%2;

            }
            else if(xor_total==0){
                 d2=0;
            }
            if(d1!=d2){
                ans++;
            }
            xor_total/=2;
            temp/=2;
        }
        return ans;
    }
};