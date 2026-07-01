class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> v;
        string temp;

        while (ss >> temp)
            v.push_back(temp);

        string word = v.back();

        for (int i = (int)v.size() - 2; i >= 0; --i) {
            word += ' ';
            word += v[i];
        }

        return word;
    }
};