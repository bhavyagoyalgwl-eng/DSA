class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num2<=99){
            return 0;
        }
        int ans=0;
        for(int i=num1;i<=num2;i++){
            string temp=to_string(i);
            for(int i=1;i<temp.size()-1;i++){
                if(temp[i]>temp[i-1] && temp[i]>temp[i+1]){
                    ans++;
                }
                else if(temp[i]<temp[i-1] && temp[i]<temp[i+1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};