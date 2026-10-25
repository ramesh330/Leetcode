/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    struct ListNode res;
    res.next = NULL;
    struct ListNode *temp = &res;

    while(list1 && list2)
    {
        if(list1->val <= list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if(list1)
    temp->next = list1;
    else
    temp->next = list2;

    return res.next;
}