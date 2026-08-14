class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>freq(51);
        vector<int>ans(A.size());
        for(int i=0;i<A.size();i++){
            int temp=0;
             freq[A[i]]++;
            if(freq[A[i]]==2){
                
                temp++;
            }
            freq[B[i]]++;
            if(freq[B[i]]==2){
                
                temp++;
            }
           
            
            ans[i]=temp;
            if(i>0){
                ans[i]+=ans[i-1];
            }
            
        }
        return ans;
    }
};