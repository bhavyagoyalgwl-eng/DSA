class Solution {
public:
    string reverseWords(string s) {
        vector<string>word;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            word.push_back(temp);
        }
        for(int i=0;i<word.size();i++){
            string temp2=word[i];
            int low=0;
            int high=temp2.size()-1;
            while(low<=high){
                swap(temp2[low],temp2[high]);
                low++;
                high--;
            }
            word[i]=temp2;
        }
        string ans="";
        for(int i=0;i<word.size();i++){
            ans+=word[i];
            if(i<word.size()-1){
            ans+=" ";
            }
        }
        return ans;
    }
};