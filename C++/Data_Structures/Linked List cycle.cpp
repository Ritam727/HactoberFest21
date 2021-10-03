// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
	int flag;
};

void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = new Node;

	/* put in the data */
	new_node->data = new_data;

	new_node->flag = 0;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
 bool hasCycle(Node *head) {
        Node *walker,*runner;
        walker=head;
        runner=head;
        while(runner && runner->next){
               walker=walker->next;
               runner=runner->next->next;
            if(walker==runner){
                return true;
            }
             
        }
        
        return false;
    }

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	/* Create a loop for testing */
	head->next->next->next->next = head;

	if (hasCycle(head))
		cout << "Loop found";
	else
		cout << "No Loop";

	return 0;
}
// This code is contributed by Geetanjali
