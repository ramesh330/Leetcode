/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) 
{
    if(head==NULL || head->next==NULL) return head;

    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* nxt = head->next;
    
    head = nxt;
    while(curr && nxt)
    {
        if(prev)
            prev->next = nxt;
        curr->next = nxt->next;
        nxt->next = curr;
        prev = curr;
        curr = curr->next;
        if(curr)
            nxt = curr->next;
    }
    return head;
}