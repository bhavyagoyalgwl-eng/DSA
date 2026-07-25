class Solution {
public:
    int thirdMax(vector<int>& nums) {
            long long largest=LLONG_MIN;
            long long Secondlargest=LLONG_MIN;
            long long Thirdlargest=LLONG_MIN;
            if(nums.size()==1) return nums[0];
            if(nums.size()==2){
                for(int i=0;i<nums.size();i++){
                    if(nums[i]>=largest){
                        Secondlargest=largest;
                        largest=nums[i];
                    }
                    else if(nums[i]>Secondlargest && nums[i]!=largest){
                        Secondlargest=nums[i];
                    }

                }
            }
            if(nums.size()==2) return largest;
            else{
                for(int i=0;i<nums.size();i++){
                    if(nums[i]>largest){
                        Thirdlargest=Secondlargest;
                        Secondlargest=largest;
                        largest=nums[i];
                    }
                    else if(nums[i]>Secondlargest && nums[i]!=largest){
                        Thirdlargest=Secondlargest;
                        Secondlargest=nums[i];
                    }
                    else if(nums[i]>Thirdlargest && nums[i]!=Secondlargest && nums[i]!=largest){
                        Thirdlargest=nums[i];
                    }

                }
            }
            if(Thirdlargest==LLONG_MIN){
                return largest;
            }
            return Thirdlargest;
        }
};