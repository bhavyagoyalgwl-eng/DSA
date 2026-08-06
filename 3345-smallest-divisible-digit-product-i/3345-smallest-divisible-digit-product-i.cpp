class Solution {
public:
    int smallestNumber(int n, int t) {
        bool flag=false;
        
        int temp2=1;
        int ans=0;
        while(!flag){

            int temp=n;

            while(temp>0){
                temp2*=(temp%10);
                temp/=10;
            }
            if(temp2%t==0){
                flag=true;
                ans=n;
            }
            n++;
            temp2=1;
        }
        return ans;
    }
};