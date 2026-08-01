class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>mp={
            {'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},{'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},{'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3}
        };
        int index=0;
        vector<string>ans;
        while(index<words.size()){
            string temp=words[index];
            int index2=0;
            int val=mp[tolower(temp[index2])];
            index2++;
            while(index2<temp.size()){
                if(mp[tolower(temp[index2])]==val){
                    index2++;
                }
                else{
                    break;
                }
            }
            if(index2==temp.size()){
                ans.push_back(temp);
            }
            index++;
        }
        return ans;
    }
};