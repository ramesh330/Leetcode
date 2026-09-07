/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    struct ListNode* tempA = headA;
    struct ListNode* tempB = headB;

    while(tempA)
    {
        while(tempB)
        {
            if(tempA==tempB)
            return tempA;
            tempB=tempB->next;
        }
        tempA=tempA->next;
        tempB=headB;
    }
    return NULL;
}