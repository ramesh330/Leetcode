/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    unsigned int res = 0;
    while(head){
        res |= head->val;
        head = head->next;
        if(head != NULL)
        res <<= 1;
    }
    return res;
}