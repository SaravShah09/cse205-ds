class Solution {
public:
    int findKthPositive(vector<int> &arr,int k){
        int down = 0;
        int up = arr.size()-1;
        while(down<=up){
            int mid=down +(up - down)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                down=mid+1;
            }
            else{
                up=mid-1;
            }
        }
        return k+up+1;
    }
};