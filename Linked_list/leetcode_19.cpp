//19. Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first=head;
        ListNode* second=head;
        while(n--)
        {
            first = first->next;
        }
        
        if(first == nullptr)
        return head->next;

        while(first->next !=nullptr)
        {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
                
        return head;
    }
};