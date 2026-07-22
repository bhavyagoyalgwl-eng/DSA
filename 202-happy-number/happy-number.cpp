class Solution {
public:
    int sos(int n){
        int sum=0;
        while(n>=1){
            int val=n%10;
            sum+=(val*val);
            n/=10;
            
        }
        return sum;
    }
    bool isHappy(int n) {
        int temp=n;
        unordered_set<int>s;
        if(temp==1){
            return true;
        }
        while(temp!=1){
            temp=sos(temp);
            if(temp==1){
                return true;
            }
            if(s.find(temp)==s.end()){
                s.insert(temp);
            }
            else{
                return false;
            }

        }
        return false;
    }
};