class Solution {
public:
void mergeSort(vector<int>& nums, int begin, int end){
        if(begin>=end){
            return;
        }
        int mid = (begin+end)/2;
        mergeSort(nums, begin, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, begin, end, mid);
    }
    void merge(vector<int>& nums, int begin, int end, int mid){
        vector<int> arr2;
        int a1 = begin;
        int a2 = mid+1;
        while(a1<=mid && a2<=end){
            if(nums[a1]<nums[a2]){
                arr2.push_back(nums[a1]);
                a1++;
            }
            else{
                arr2.push_back(nums[a2]);
                a2++;
            }
        }
        while(a1<=mid){
            arr2.push_back(nums[a1]);
            a1++;
        }
        while(a2<=end){
            arr2.push_back(nums[a2]);
            a2++;
        }
        for(int i=0; i<arr2.size(); i++){
            nums[begin+i] = arr2[i];
        }
    }
    int minimumSum(int num) {
        vector<int> n;
        n.push_back(num/1000);
        n.push_back((num%1000)/100);
        n.push_back(((num%1000)%100)/10);
        n.push_back(((num%1000)%100)%10);
        mergeSort(n, 0, n.size()-1);

        int min0 = n[0]*10 + n[3];
        int min1 = n[1]*10 + n[2];

        int min = min0 + min1;
        return min;
    }
};