class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());
        int temp=-1;
        for(int i=0;i<nums1.size();i++){
            int index=0;
            while(nums1[i]!=nums2[index]){
                index++;
            }
            for(int j=index;j<nums2.size();j++){
                
                if(nums2[j]>nums1[i]){
                    temp=nums2[j];
                    break;
                }
            }
            ans[i]=temp;
            temp=-1;

        }
        return ans;
    }
};