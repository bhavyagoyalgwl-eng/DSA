class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i=0;i<operations.size();i++){
            
            if(operations[i]=="C"){
                ans.pop_back();
            }
            else if(operations[i]=="D"){
                int x=ans.back();
                ans.push_back(2*x);
            }
            else if(operations[i]=="+"){
                int x=ans.back();
                int y=ans[ans.size()-2];
                
                ans.push_back(x+y);
            }
            else{
                ans.push_back(stoi(operations[i]));
            }

        }
        
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};