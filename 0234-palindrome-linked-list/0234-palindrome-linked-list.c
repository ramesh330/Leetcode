/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) 
{
    if(head==NULL)
    return false;

    if(head->next == NULL)
    return true;

    if(head->next->next==NULL)
    {
        if(head->val == head->next->val)
        return true;
        return false;
    }

    struct ListNode *temp = head,*temp2 = NULL;
    struct ListNode *rev = temp2;

    while(temp)
    {
        struct ListNode *new = malloc(sizeof(struct ListNode));
        new->val = temp->val;
        new->next = NULL;

        if(rev==NULL)
        rev = new;
        else
        {
            new->next = rev;
            rev = new;
        }
        temp = temp->next;
    }  
    
    while(rev && head)
    {
        if(rev->val != head->val)
        return false;
        rev = rev->next;
        head = head->next;
    }
    return true;
}