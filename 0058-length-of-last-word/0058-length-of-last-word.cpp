class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string temp;
        vector<string>temp1;
        while(ss>>temp){
            temp1.push_back(temp);
        }
        
        return temp1[temp1.size()-1].size();
        
    }
};