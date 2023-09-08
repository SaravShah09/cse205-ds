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
    int length(ListNode* head)
    {
        ListNode* nxt = head;
        int c=0;
        while(nxt!=NULL)
        {
            c++;
            nxt  = nxt->next;
        }
        return c;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int pos = len - n + 1;
        ListNode* nxt= head;
        int count = 1;
        if(head->next == NULL && n>=1)
        {
            return NULL;
        }
        if(pos==1)
        {
            return head->next;
        }
        while(nxt!=NULL && count<pos)
        {
            nxt = nxt->next;
            count++;
        }
        ListNode* temp = head;
        while(temp->next!=nxt)
        {
            temp = temp->next;
        }
        temp->next = nxt->next;
        nxt->next = NULL;
        return head;

    }
};