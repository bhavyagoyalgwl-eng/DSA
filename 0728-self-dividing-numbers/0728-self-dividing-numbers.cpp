class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp=i;
            while(temp>0){
                int n=temp%10;
                if(n==0){
                    break;
                
                }
                if(i%n==0){
                    temp/=10;
                }
                else{
                    break;
                }
            }
            if(temp==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};