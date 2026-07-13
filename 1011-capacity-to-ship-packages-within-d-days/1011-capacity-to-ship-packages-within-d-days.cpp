class Solution {
public:
    bool possible(int capacity,vector<int>&weights,int days){
        int sum=0;
        int i=0;
        while(days>0 && i!=weights.size()){
            if(sum+weights[i]<=capacity){
                sum+=weights[i];
                i++;
            }
            else{
                sum=0;
                days--;
            }
        }
        if(i==weights.size()){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int minimum=INT_MIN;
        int ans=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            minimum=max(minimum,weights[i]);
        }
        int low=minimum;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(possible(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};