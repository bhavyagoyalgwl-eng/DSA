class Solution {
public:
    bool possible(int k,vector<int>piles,int h){
      
        int i=0;
        while(h>0 && i!=piles.size()){
            if(piles[i]<=k){
                h--;
                i++;
            }
            else{
                int hours=ceil((double)piles[i]/(double)k);
                h=h-hours;
                i++;
            }
        }
        return (i==piles.size() && h>=0);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maximum=INT_MIN;
        int ans=0;
        for(int i=0;i<piles.size();i++){
           
            maximum=max(maximum,piles[i]);
        }
        int low=1;
        int high=maximum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(mid,piles,h)){
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