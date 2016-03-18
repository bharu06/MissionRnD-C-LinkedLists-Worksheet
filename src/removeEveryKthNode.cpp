/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int k) {
	if (head == NULL || k<0 || k == 0 || k==1){
		return(NULL);
	}
	else{
		struct node *temp = head;
		int t;
		while (temp != NULL&&temp->next != NULL){
			if (k == 1){
				head = NULL;
				return head;
			}
			t = k;
			while (t > 2){
				temp = temp->next;
				t--;
			}
			if (temp->next != NULL){
				temp->next = (temp->next)->next;
				temp = temp->next;
			}
		}
		return head;
	}
}