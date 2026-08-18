class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            largest=max(largest,nums[i]);
        }
        

        if(k==1){
            sort(nums.begin(),nums.end());
            int index=nums.size()-1;
            while(index>0 && m[nums[index]]>1){
                index--;
            }
            if(index==0 && nums[index]==nums[index+1]){
                return -1;
            }
            else{
                return nums[index];
            }
             }
        else if(k==nums.size()){
            return largest;
        }   
        else{
            int low=0;
            int high=nums.size()-1;
            if(nums[low]==nums[high]){
                return -1;
            }
            else if(nums[high]>nums[low]){
                if(m[nums[high]]>1){
                    if(m[nums[low]]==1){
                        return nums[low];
                    }
                    else{
                    return -1;
                    }
                }
                else{
                return nums[high];
                }
            }
            else if(nums[low]>nums[high]){
                if(m[nums[low]]>1){
                    if(m[nums[high]]==1){
                        return nums[high];
                    }
                    else{
                    return -1;
                    }
                }
                else{
                return nums[low];
                }
            }
            else{
                return nums[low];
            }
        
        }
                
       

        
    }
};