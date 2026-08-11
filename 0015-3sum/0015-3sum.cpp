class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
       
        
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        


        for(int i=0;i<temp.size()-2;i++){
            if(i>0 && temp[i]==temp[i-1]){
                continue;
            }
            int left=i+1;
            int right=temp.size()-1;
            while(left<right){
                if(temp[i]+temp[left]+temp[right]==0){
                    ans.push_back({temp[i],temp[left],temp[right]});
                    while(left<right && temp[left]==temp[left+1]){
                        left++;
                    }
                    while(left<right && temp[right]==temp[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(temp[i]+temp[left]+temp[right]>0){
                    right--;
                }
                else{
                    left++;
                }
        }
        }
        

        return ans;
    }
};