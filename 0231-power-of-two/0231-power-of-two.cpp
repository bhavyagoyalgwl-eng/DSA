class Solution {
public:
    int powerofTwo(double n){
        if(n==1.00){
            return 1;
        }
        if(n<1.00){
            return 0;
        }
        
            n/=2;
            return powerofTwo(n);
        
    }
    bool isPowerOfTwo(int n) {
        if(powerofTwo(n)==1){
            return true;
        }
        return false;
        }
};