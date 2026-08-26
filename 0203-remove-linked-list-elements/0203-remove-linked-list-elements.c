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

    struct ListNode temp;
    temp.next = head;

    struct ListNode *prev = &temp, *curr = head;

    while(curr)
    {    
        if(curr->val == val)
        {
            prev->next = curr->next;
            curr = curr->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    } 
    return temp.next;
}