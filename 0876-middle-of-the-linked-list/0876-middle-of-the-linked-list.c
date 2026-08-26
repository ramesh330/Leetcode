/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) 
{
    int count=1;
    struct ListNode *temp = head,*temp1 = head;

    while(temp)
    {
        if(count%2==0)
        temp1 = temp1->next;

        count++;
        temp = temp->next;
    }
    head = temp1;
    return head;
}