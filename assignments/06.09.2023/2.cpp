lass Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode = new ListNode(-1);
        ListNode* dummyhead = dummynode;

        ListNode* head1 = l1;
        ListNode* head2 = l2;

        

        int carry = 0;

        while(head1 != NULL && head2 != NULL){
            int val1 = head1 -> val;
            int val2 = head2 -> val;

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            ListNode* num = new ListNode(digit);

            dummyhead -> next = num;
            dummyhead = num;

            carry = sum / 10;

            head1 = head1 -> next;
            head2 = head2 -> next;

        }

        while(head1 != NULL){
            int val1 = head1 -> val;
            
            int sum = carry + val1;
            int digit = sum % 10;

            ListNode* num = new ListNode(digit);

            dummyhead -> next = num;
            dummyhead = num;

            carry = sum / 10;

            head1 = head1 -> next;
        }

         while(head2 != NULL){
            int val2 = head2 -> val;
            
            int sum = carry + val2;
            int digit = sum % 10;

            ListNode* num = new ListNode(digit);

            dummyhead -> next = num;
            dummyhead = num;

            carry = sum / 10;

            head2 = head2 -> next;
        }

        while(carry != 0){
            int sum = carry;
            int digit = sum % 10;

            ListNode* num = new ListNode(digit);

            dummyhead -> next = num;
            dummyhead = num;

            carry = sum / 10;
        }

        return dummynode->next ;
    }
}