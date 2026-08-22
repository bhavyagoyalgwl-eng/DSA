class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        int i=0;
        int j=0;
        int prevloss=0;
        while(j<k){
            if(grumpy[j]==1) prevloss+=customers[j];
            j++;
        }
        int maxloss=prevloss;
        int maxIdx=0;
        i++;
        while(j<customers.size()){
            if(grumpy[j]==1) prevloss+=customers[j];
            if(grumpy[i-1]==1) prevloss-=customers[i-1];
            
            if(prevloss>maxloss){
                maxloss=prevloss;
                maxIdx=i;
            }
            i++;
            j++;

        }
        int index=0;
        int ans=0;
        while(index<customers.size()){
            if((index<maxIdx || index>maxIdx+k-1) && grumpy[index]==0){
                ans+=customers[index];
            }
            else if(index>=maxIdx && index<=maxIdx+k-1) ans+=customers[index];
            
            index++;
        }
        return ans;

    }
};