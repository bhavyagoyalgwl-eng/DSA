class Solution {
public:
    int bestClosingTime(string customers) {
      int penalty=0;
     
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                penalty++;
            }
        } 
        int ans=0;
        int minpenalty=penalty;
        for(int i=1;i<=customers.size();i++){
            if(customers[i-1]=='Y') penalty--;
            else if(customers[i-1]=='N') penalty++;
            if(penalty<minpenalty){
                minpenalty=penalty;
                ans=i;
            } 

        }
       
        return ans;
    }
};