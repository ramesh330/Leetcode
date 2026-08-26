/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head==NULL || head->next==NULL)
    return head;

    struct ListNode *curr = head,*prev = head;
    curr = curr->next;

    while(curr)
    {
        if(curr->val == prev->val)
        {
            curr = curr->next;
            free(prev->next);
            prev->next = curr;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}