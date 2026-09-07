class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        if(n==2) return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int maximum=INT_MIN;
        int m=nums.size();
        int n=nums[0].size();
        for(int i=0;i<m;i++){
            if(isPrime(nums[i][i])){
                maximum=max(maximum,nums[i][i]);
            }
        }
        int i=0;
        int j=n-1;
        while(i<m && j>=0){
            if(isPrime(nums[i][j])){
                maximum=max(maximum,nums[i][j]);
                
            }
           
                i++;
                j--;
            
        }
        if(maximum==INT_MIN) return 0;
        return maximum;
    }
};