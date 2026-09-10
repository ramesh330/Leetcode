/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* fast = head;
    struct ListNode* prev = NULL;
    struct ListNode* slow = head;

    if(head->next==NULL && n==1)
    {
        free(head);
        return NULL;
    }
    int i=0;
    while(fast)
    {
        if(i<n)
        {
            fast = fast->next;
            i++;
        }
        else
        {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
    }
    if(prev==NULL)
    {
        head = slow->next;
        free(slow);
    }
    else
    {
        prev->next = slow->next;
        free(slow);
    }
    return head;
}