/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
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
public:
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode *dummy = head;
        while(dummy!=NULL)
        {
            a.push_back(dummy->val);
            dummy = dummy->next;
        }
        mergeSort(a, 0, a.size()-1);
        ListNode *temp = head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val = a[i];
            temp = temp->next;
            i++;
        }
        return head;
        
        return temp;
    }
};