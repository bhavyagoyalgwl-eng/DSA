class Solution {
public:
    int bestClosingTime(string customers) {
      int penalty=0;
      vector<int>close(customers.size()+1);
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                penalty++;
            }
        } 
        
        for(int i=0;i<=customers.size();i++){
            if(i==0) close[i]=penalty;
            
            else if(customers[i-1]=='Y') penalty--;
            close[i]=penalty;

        }
        int N=0;
        int ans=INT_MAX;
        for(int i=0;i<=customers.size();i++){
            close[i]+=N;
            if(i<customers.size() && customers[i]=='N'){
                N++;
                
            }
            ans=min(ans,close[i]);

        }
        for(int i=0;i<close.size();i++){
            if(close[i]==ans){
                return i;
            }
        }
        return -1;
    }
};