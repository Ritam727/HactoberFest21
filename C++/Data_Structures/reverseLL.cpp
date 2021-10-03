

ListNode *head;
void reversee(ListNode *A, ListNode **head) {
	if (A->next == NULL) {
		*head = A;
		return;
	}

	reversee(A->next, head);
	A->next->next = A;
	A->next = null;

}
ListNode* Solution::reverseList(ListNode* A) {
	ListNode *head = NULL;
	reversee(A, &head);
	return head;

}
