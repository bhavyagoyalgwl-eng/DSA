class Solution {
public:
    vector<string>ans;

    void solve(int n,int i,string temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        solve(n,i+1,temp+'1');
        if(i==0 || temp.back()!='0'){
            solve(n,i+1,temp+'0');
        }
    }
    vector<string> validStrings(int n) {
        
        solve(n,0,"");
        return ans;
    }
};