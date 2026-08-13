class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>temp;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1') temp.push_back(i);
        }
        vector<int>ans(boxes.size());
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<temp.size();j++){
                ans[i]+=abs(temp[j]-i);
            }
        }
        return ans;
    }
};