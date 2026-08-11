class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
       
        
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        


        for(int i=0;i<temp.size()-1;i++){
            int left=i+1;
            int right=temp.size()-1;
            while(left<right){
                if(temp[i]+temp[left]+temp[right]==0){
                    ans.push_back({temp[i],temp[left],temp[right]});
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
        set<vector<int>>s(ans.begin(),ans.end());
        vector<vector<int>>ans2(s.begin(),s.end());

        return ans2;
    }
};