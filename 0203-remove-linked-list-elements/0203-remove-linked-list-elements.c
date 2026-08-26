/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    if(head==NULL) return head;
    struct ListNode *prev = head, *curr = head;

    while(curr)
    {
        if(curr->val == val)
        {
            if(head==curr)
            {
                head = curr->next;
                curr = curr->next;
                free(prev);
                prev = curr;
            }
            else
            {
                curr = curr->next;
                free(prev->next);
                prev->next=curr;
            }

        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    } 
    return head;   
}