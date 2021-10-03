class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0, head), *first = dummy, *last = head;
        int count = n - 1;
        while (count--)
        {
            last = last->next;
        }
        while (last->next)
        {
            first = first->next;
            last = last->next;
        }
        ListNode *temp = first->next;
        first->next = first->next->next;
        delete temp;
        temp = dummy;
        dummy = dummy->next;
        return dummy;
    }
};
