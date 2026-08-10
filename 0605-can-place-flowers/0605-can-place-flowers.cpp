class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int temp=n;
        int index=0;
        if(flowerbed.size()==1 && flowerbed[index]==0 && temp==1){
            return true;
        }
        if(flowerbed.size()==1 && flowerbed[index]==1 && temp==1){
            return false;
        }
        if(flowerbed.size()==1 && flowerbed[index]==1 && temp==0){
            return true;
        }
        else{
        
        while(temp!=0 && index<flowerbed.size()){
                if(index==0 && flowerbed[index]==0 && flowerbed[index+1]==0){
                    temp--;
                    index+=2;
                }
                else if(index==flowerbed.size()-1 && flowerbed[index]==0 && flowerbed[index-1]==0){
                    index++;
                    temp--;
                }
                else if(index>0 && index<flowerbed.size()-1 && flowerbed[index]==0 && flowerbed[index-1]==0 && flowerbed[index+1]==0){
                    temp--;
                    index+=2;
                }
                else{
                index++;
                }
        }
        return temp==0;
        }
    }
};