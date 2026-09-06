/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    if(list1==NULL && list2==NULL)
    return list1;

    if(list2==NULL)
    return list1;

    if(list1==NULL)
    return list2;

    struct ListNode *temp = list1;
    while(temp->next)
    temp=temp->next;

    temp->next = list2;

    if(list1->next==NULL)
    return list1;

    int swapped;
    do
    {
        swapped = 0;
        struct ListNode *prev = NULL;
        struct ListNode *curr = list1;

        while(curr != NULL && curr->next != NULL)
        {
            struct ListNode *nextCurr = curr->next;
            if(curr->val > nextCurr->val)
            {
                curr->next = nextCurr->next;
                nextCurr->next = curr;

                if(prev==NULL)
                list1 = nextCurr;
                else
                prev->next = nextCurr;

                prev = nextCurr;
                swapped = 1;

            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }while(swapped);

    return list1;
}