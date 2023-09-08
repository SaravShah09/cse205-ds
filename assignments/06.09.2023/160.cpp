class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int l1=0, l2=0;
        while(a!=NULL)
        {
            l1++;
            a=a->next;
        }
        while(b!=0)
        {
            l2++;
            b=b->next;
        }

        int d = l1-l2;
        a=headA;
        b=headB;
        if(d<0)
        {
            while(d!=0)
            {
                b=b->next;
                d++;
            }
        }
        else
        {
            while(d!=0)
            {
                a=a->next;
                d--;
            }
        }

        while(a!=NULL && b!=NULL)
        {
            if(a==b)
            {
                return a;
            }
            a = a->next;
            b = b->next;
        }
        return a;
    }
};