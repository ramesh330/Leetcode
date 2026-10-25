/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) 
{
    if(head==NULL || head->next==NULL)
    return head;

    // struct ListNode *temp = head,*temp2 = NULL;
    // struct ListNode *rev = temp2;
    // if(head->next == NULL)
    // {
    //     return head;
    // }
    // while(temp)
    // {
    //     struct ListNode *new = malloc(sizeof(struct ListNode));
    //     new->val = temp->val;
    //     new->next = NULL;

    //     if(rev==NULL)
    //     rev = new;
    //     else
    //     {
    //         new->next = rev;
    //         rev = new;
    //     }
    //     temp = temp->next;
    // }
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    struct ListNode* nextNode = NULL;

    while(curr)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }  
    return prev;
}