class Solution {
public:
    int possible(int capacity,vector<int>&weights,int days){
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
            return 1;
        }
        else{
            return -1;
        }
        return -1;
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
            int res=possible(mid,weights,days);
            if(res==1){
                ans=mid;
                high=mid-1;
            }
            else if(res==-1){
                low=mid+1;
            }
            
        }
        return ans;
    }
};