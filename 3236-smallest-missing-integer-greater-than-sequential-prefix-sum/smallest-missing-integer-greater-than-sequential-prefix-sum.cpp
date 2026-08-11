class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int index=1;
        int sum=nums[0];
        while(index<nums.size() && nums[index]-nums[index-1]==1){
            sum+=nums[index];
            index++;
        }
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        if(sum>temp[temp.size()-1]){
            return sum;
        }

        int low=0;
        int high=temp.size()-1;
        bool flag=false;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(temp[mid]==sum){
                sum++;
                low=0;
                high=temp.size()-1;

            }
            else if(temp[mid]<sum){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return sum;
    }
};