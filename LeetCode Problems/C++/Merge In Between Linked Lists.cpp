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

/* Input: list1 = [0,1,2,3,4,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [0,1,2,1000000,1000001,1000002,5]
Explanation: We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.*/

class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        // 0 1 2 3 4 5 - example list
        // a=3 b=4
        ListNode *temp1 = list1;        // temp 1 will refer to -> 2
        ListNode *temp2 = list1;        // temp 2 will refer to -> 3
        for (int i = 0; i < a - 1; ++i) // looping till a-1 to get to the previous element of the ath element
        {
            temp1 = temp1->next;
        }
        for (int i = 0; i < b + 1; ++i) // looping till b+1 to get the next element of the bth element
        {
            temp2 = temp2->next;
        }
        temp1->next = NULL;  // breaking the list1 from temp1
        temp1->next = list2; // adding list 2 to temp1
        ListNode *temp3 = list2;

        while (temp3->next != NULL) // adding the left out list1 from b to the end
        {
            temp3 = temp3->next;
        }
        temp3->next = temp2;

        return list1;
    }
};