class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        vector<int>ans(houses.size());
        for(int i=0;i<houses.size();i++){
            int temp=houses[i];
            int low=0;
            int high=heaters.size()-1;
            int distance=INT_MAX;
            while(low<=high){
                int mid=low+(high-low)/2;
                distance=min(distance,abs(temp-heaters[mid]));
                if(heaters[mid]==temp){
                    distance=0;
                    break;
                }
                
                else if(heaters[mid]<temp){
                    low=mid+1;
                }
                else if(heaters[mid]>temp){
                    high=mid-1;
                }

            }
            ans[i]=distance;
        }
        return *max_element(ans.begin(),ans.end());
    }
};