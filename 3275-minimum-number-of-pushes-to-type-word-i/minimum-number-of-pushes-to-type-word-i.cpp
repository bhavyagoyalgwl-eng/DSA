class Solution {
public:
    int minimumPushes(string word) {
        int n1=word.size();
        int ans=0;
        int cost=1;
        int n=0;
        while(n<n1){
        int temp=min(8,n1-n);
        ans+=cost*temp;
        cost++;
        n+=8;
        }
        return ans;
    }
};