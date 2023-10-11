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
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        if(!head)
        {
            return NULL;
        }
        
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=1; i<v.size(); i++){
            int j=i;
            while(j && v[j]<v[j-1]){
                swap(v[j], v[j-1]);
                j--;
            }
        }
        ListNode* ans=NULL;
        for(int i=v.size()-1; i>=0; i--){
            ListNode* temp=new ListNode;
            temp->val=v[i];
            temp->next=ans;
            ans=temp;
        }
        return ans;
    }
};