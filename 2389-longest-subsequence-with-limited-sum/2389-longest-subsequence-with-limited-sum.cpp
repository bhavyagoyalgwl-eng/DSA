class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>answer(queries.size());
        for(int i=0;i<queries.size();i++){
            int index=0;
            int ans=0;
            int temp=0;
            while(index<nums.size()){
                if(nums[index]+temp>queries[i]){
                    break;
                }
                else{
                    temp+=nums[index];
                    ans++;
                }
                index++;
            }
            answer[i]=ans;
        }
        return answer;
    }
};