class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low=0;
        int high=arr.size()-1;
        int index=-1;
        int value=0;
        vector<int>vec(k);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                index=mid;
                break;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
        }
        if(index!=-1){
            vec[value]=arr[index];
            value++;
            int lb=index-1;
            int ub=index+1;
            while(value<k && lb>=0 && ub<=arr.size()-1){
                if(abs(arr[lb]-x)<abs(arr[ub]-x)){
                    vec[value]=arr[lb];
                    lb--;
                    value++;
                }
                else if(abs(arr[ub]-x)<abs(arr[lb]-x)){
                    vec[value]=arr[ub];
                    ub++;
                    value++;
                }
                else if(abs(arr[lb]-x)==abs(arr[ub]-x)){
                    if(arr[lb]<arr[ub]){
                        vec[value]=arr[lb];
                        lb--;
                        value++;
                    }
                    else{
                        vec[value]=arr[ub];
                        ub++;
                        value++;
                    }
                }
            }
            while(value<k && lb>=0){
                vec[value]=arr[lb];
                value++;
                lb--;
            }
            while(value<k &&  ub<arr.size()){
                vec[value]=arr[ub];
                value++;
                ub++;
            }
        }
        else{
            if(x<arr[0]){
                while(value<k){
                    vec[value]=arr[value];
                    value++;

                }
            }
            else if(x>arr[arr.size()-1]){
                for(int i=0;i<k;i++){
                vec[i]=arr[arr.size()-k+i];
                }
                return vec;
            }
            int low=0;
            int high=arr.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==x){
                    index=mid;
                }
                else if(arr[mid]>x){
                    high=mid-1;
                }
                else if(arr[mid]<x){
                    low=mid+1;
                }
            }
            int lb=high;
            int ub=low;
            value=0;
            while(value<k && lb>=0 && ub<arr.size()){
                if(abs(arr[lb]-x)<abs(arr[ub]-x)){
                    vec[value]=arr[lb];
                    lb--;
                    value++;
                }
                else if(abs(arr[ub]-x)<abs(arr[lb]-x)){
                    vec[value]=arr[ub];
                    ub++;
                    value++;
                }
                else if(abs(arr[lb]-x)==abs(arr[ub]-x)){
                    if(arr[lb]<arr[ub]){
                        vec[value]=arr[lb];
                        lb--;
                        value++;
                    }
                    else{
                        vec[value]=arr[ub];
                        ub++;
                        value++;
                    }
                }
            }
            while(value<k && lb>=0){
                vec[value]=arr[lb];
                value++;
                lb--;
            }
            while(value<k && ub<arr.size()){
                vec[value]=arr[ub];
                value++;
                ub++;
            }
            
            

        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};