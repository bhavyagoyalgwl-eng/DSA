class Solution {
public:
    int reverseBits(int n) {
        int temp=n;
        int res=0;
        for(int i=0;i<32;i++){
            int bit=(temp>>i)&1;
            res|=bit<<(31-i);
        }
        return res;
    }
};