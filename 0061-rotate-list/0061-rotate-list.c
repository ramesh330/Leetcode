/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) 
{
    if(head==NULL)
        return NULL;
    int nodes=0;
    struct ListNode* temp = head;
    while(temp)
    {
        ++nodes;
        temp=temp->next;
    }
    temp = head;
    for(int i=0; i<k%nodes; i++)
    {
        struct ListNode* first = temp,*prev = NULL,*last = NULL;
        while(temp->next)
        {
            prev = temp;
            temp = temp->next;
        }
        last = temp;
        prev->next = NULL;
        last->next = first;
        head=temp=last;
    }
    return head;
}