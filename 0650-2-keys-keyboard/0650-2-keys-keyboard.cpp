class Solution {
public:
    int highestfactor(int temp){
        
        for(int i=2;i*i<=temp;i++){
            if(temp%i==0){
                return temp/i;
            }
        }
        return 1;
    }
    int minSteps(int n) {
        int temp=n;
        int ans=0;
        while(temp!=1){
            int factor=highestfactor(temp);
            if(factor==1){
                ans+=temp;
                break;
            }
            ans+=(temp/factor);
            temp=factor;
            }
            return ans;
    }
};