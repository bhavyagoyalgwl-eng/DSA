class Solution {
public:
    int beautySum(string s) {
        int sum=0;

        
        for(int i=0;i<s.size();i++){
            vector<int>vec(26);
   
            for(int j=i;j<s.size();j++){
            int maximum=INT_MIN;
            int minimum=INT_MAX;
                vec[s[j]-'a']++;
                for(int k=0;k<vec.size();k++){
                    if(vec[k]>0){
                    maximum=max(maximum,vec[k]);
                    minimum=min(minimum,vec[k]);
                    }

                }
                if(maximum-minimum>0){
                    sum+=(maximum-minimum);
                }
            


            }

        }
        return sum;
    }
};