class Solution {
public:
    bool detectCapitalUse(string word) {
        bool AllUpper=true;
        bool AllLower=true;
        bool AllLowerFirstUpper=true;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                AllLower=false;
            }
            if(word[i]>='a' && word[i]<='z'){
                AllUpper=false;
            }
        }
        if(word[0]>='a' && word[0]<='z'){
            AllLowerFirstUpper=false;
        }
        for(int i=1;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                AllLowerFirstUpper=false;
            }
        }
    return AllLower || AllUpper || AllLowerFirstUpper;
    }
};