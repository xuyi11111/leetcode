/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* a1=l1;
    struct ListNode* a2=l2;
    int count1=0,count2=0;
    while(a1->next!=NULL){
        count1++;
        a1=a1->next;
    }
    while(a2->next!=NULL){
        count2++;
        a2=a2->next;
    }
    int l=0;
    if(count1<count2){
        a1=l2;
        a2=l1;
        l=count1;
    }
    else{
        a1=l1;
        a2=l2;
        l=count2;
    }
    int len=abs(count1-count2);
    for(int i=0;i<len;i++){
        a1=a1->next;
    }
    int carry;
    for(int i=0;i<=l;i++){
        a1->val=(a1->val+a2->val)%10;
        a1=a1->next;
        a2=a2->next;
    }
    if(count1<count2){
        return l2;
    }
    return l1;
    
}