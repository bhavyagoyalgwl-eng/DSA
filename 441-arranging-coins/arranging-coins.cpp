class Solution {
public:
    int arrangeCoins(int n) {
        int low=0;
        int high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long curr=mid*(mid+1)/2;
            long long next=(mid+1)*(mid+2)/2;
            if(curr<=n && next>n){
                return mid;
            }
            if((mid*(mid+1))/2>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};