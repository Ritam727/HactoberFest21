/* Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

Example 2:
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
Example 3:

Input: head = [1,2,3,4,5], k = 1
Output: [1,2,3,4,5]
Example 4:

Input: head = [1], k = 1
Output: [1]
 

Constraints:

The number of nodes in the list is in the range sz.
1 <= sz <= 5000
0 <= Node.val <= 1000
1 <= k <= sz

*/



class Solution {
public:
    ListNode *st = NULL;
    ListNode* reverse(ListNode *start, ListNode *end, ListNode *pre){
        ListNode *prev = NULL, *curr = start, *nxt = NULL;
        ListNode *relEnd = end->next;
        while(curr !=NULL and curr != relEnd){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;            
            curr = nxt;
        }
        start->next = curr;
        if(pre) pre->next = prev;
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k <=1) return head;
        int t = 0;
        st = head;
        while(t<k-1){
            st = st->next;
            t++;
        }
        t = 1;
        ListNode *start, *end, *pre = NULL;;
        
        ListNode* res = head;
        
        while(res!=NULL){
            if(t==1) start = res;
            
            else if(t == k){
                end = res;
                res = reverse(start, end, pre);
                pre = start;
            }      
            
            if(t!=k) res = res->next;
                     
            else t =0;
            
            t++;
        }
        return st;
    }
};