#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* add1 = l1;
		int carry = 0;
		while (l1 != NULL&&l2 != NULL) {
			int temp = l1->val + l2->val + carry;
			l1->val = (temp) % 10;
			carry = (temp) / 10;
			if (l1->next == NULL&&l2->next == NULL&&carry == 1) {
				l1->next = new ListNode;
				l1->next->val = 1;
				l1->next->next = NULL;
				carry = 0;
			}
			l1 = l1->next;
			l2 = l2->next;
		}
		
		if (l2 != NULL) {
			l1 = l2;
			l1->val += carry;
		}
		return add1;
	}
};
