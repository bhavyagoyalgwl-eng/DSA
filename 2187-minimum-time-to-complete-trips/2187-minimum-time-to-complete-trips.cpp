class Solution {
public:
    bool possible(long long t,vector<int>&time,long long totalTrips){
       
        long long sum=0;
        for(int i=0;i<time.size();i++){
            sum+=t/time[i];
        }
   
        return sum>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long maximum=LLONG_MIN;
        for(int i=0;i<time.size();i++){
            maximum=max(maximum,(long long)time[i]);
        }
        long long ans=0;
        long long low=1;
        long long high=maximum*totalTrips;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(possible(mid,time,totalTrips)){
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