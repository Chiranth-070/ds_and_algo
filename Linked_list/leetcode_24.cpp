//24. Swap Nodes in Pairs

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* result = new ListNode(0,head);
        ListNode* ptr = result;

        while(ptr->next != nullptr && ptr->next->next != nullptr)
        {
            ListNode* swap1 = ptr->next;
            ListNode* swap2 = ptr->next->next;

            swap1->next = swap2->next;
            swap2->next = swap1;
            ptr->next = swap2;
            ptr = swap1;
        }
        return result->next;
    }
};