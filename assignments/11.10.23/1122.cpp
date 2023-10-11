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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        vector<int> ans;
        int n1=arr1.size();
        int n2=arr2.size();
        int i=0;
        int j=0;
        while(j<n2)
        {
            for(int i=0;i<n1;i++)
            {
                if(arr2[j]==arr1[i])
                {
                    ans.push_back(arr1[i]);
                    arr1[i]=-1;
                }

            }
            j++;
        }
        int size=ans.size();
        for(int i=0;i<n1;i++)
        {
            if(arr1[i]>-1)
            {
                ans.push_back(arr1[i]);
            }
        }
        mergeSort(ans,size, ans.size()-1);
        return ans;
    }
};