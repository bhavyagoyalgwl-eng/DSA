class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
        vector<vector<int>>ans;
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && temp[i]==temp[i-1]){
                    continue;
                }
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && temp[j]==temp[j-1]){
                    continue;
                }
                int left=j+1;
                int right=temp.size()-1;
                while(left<right){
                    long long sum=(long long)temp[i]+temp[j]+temp[left]+temp[right];
                    if(sum==(long long)target){
                        ans.push_back({temp[i],temp[j],temp[right],temp[left]});
                        while(left<right && temp[left]==temp[left+1]){
                            left++;
                        }
                        while(left<right && temp[right]==temp[right-1]){
                            right--;
                        }
                        left++;
                        right--;
                    }
                    else if(sum>(long long)target){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
        }
        
        return ans;
    }
};