class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<bool>v(n+1,false);
        int index=0;
        for(int i=0;i<n;i++){
            int ele=nums[i];
            v[ele]=true;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==false){
                return i;
            }
        }
        return -1;
    }
};