class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>m;
         for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m.emplace(nums[i],1);

            }
            else{
                m[nums[i]]++;
            }

         }
         int freqNeeded=floor(nums.size()/2);
        for(auto p:m){
            if(p.second>freqNeeded){
                return p.first;
            }
        }
        return 0;
    }
};