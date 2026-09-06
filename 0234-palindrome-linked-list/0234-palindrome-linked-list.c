/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) 
{
    if(head==NULL || head->next == NULL)
    return true;

    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    struct ListNode* curr = slow;
    struct ListNode* prev = NULL;
    struct ListNode* nextNode = NULL;

    while(curr)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    struct ListNode* first = head,*second = prev;
    while(second)
    {
        if(first->val != second->val)
        return false;

        first = first->next;
        second = second->next;
    }
    return true;
}