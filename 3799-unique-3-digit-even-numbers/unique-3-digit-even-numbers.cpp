class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<bool>visited(1000,0);
        int ans=0;
        int x=0;
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                    if(k==i || k==j || digits[k]%2!=0) continue;
                    x=digits[i]*100+digits[j]*10+digits[k];
                    if(!visited[x]){
                        visited[x]=true;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};