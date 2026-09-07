/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void insert_last(struct ListNode** head, int data){
    struct ListNode* new = malloc(sizeof(struct ListNode));
    new->val = data;
    new->next = NULL;

    if(*head==NULL)
    *head = new;
    else{
        struct ListNode* temp = *head;
        while(temp->next)
        temp = temp->next;

        temp->next = new;
    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* A = l1,* B = l2;
    struct ListNode* sum = NULL;
    int data,carry = 0;

    while(A || B)
    {
        if(A && B)
        {
            data = A->val + B->val + carry;
            carry = data / 10;
            insert_last(&sum,data%10);

            A = A->next;
            B = B->next;
        }
        else if(A && B==NULL)
        {
            data = A->val + carry;
            carry = data / 10;
            insert_last(&sum,data%10);

            A = A->next;
        }
        else if(B && A==NULL)
        {
            data = B->val + carry;
            carry = data / 10;
            insert_last(&sum,data%10);

            B = B->next;
        }
    }
    if(carry>0)
    insert_last(&sum,carry);

    return sum;
}