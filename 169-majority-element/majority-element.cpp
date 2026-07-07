class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>m;
         for(int i=0;i<nums.size();i++){
                 m[nums[i]]++;
            

         }
         int freqNeeded=nums.size()/2;
            for(auto p:m){
            if(p.second>freqNeeded){
                return p.first;
            }
        }
        return 0;
    }
};