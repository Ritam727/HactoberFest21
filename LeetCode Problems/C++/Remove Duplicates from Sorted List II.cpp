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

/*

Sample Input 
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

*/
class Solution
{
public:
    int length(ListNode *head)
    {
        int cnt = 0;
        while (head != NULL)
        {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

    void insert_at_tail(ListNode *&head, int data)
    {
        if (head == NULL)
        {
            head = new ListNode(data);
            return;
        }
        int l = length(head);
        ListNode *temp = head;
        while (--l)
        {
            temp = temp->next;
        }
        ListNode *n = new ListNode(data);
        n->next = NULL;
        temp->next = n;
    }

    ListNode *deleteDuplicates(ListNode *head)
    {
        int a[205] = {0};
        ListNode *c = NULL;
        if (head == NULL)
        {
            return NULL;
        }
        else if (head->next == NULL)
            return head;
        while (head != NULL)
        {
            a[101 + head->val]++;
            head = head->next;
        }
        for (int i = 1; i < 205; ++i)
        {
            if (a[i] == 1)
            {
                insert_at_tail(c, (i - 101));
            }
        }

        return c;
    }
};