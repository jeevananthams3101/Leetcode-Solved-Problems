/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *reverse(struct ListNode *head)
{
    struct ListNode *curr=head;
    struct ListNode *prev=NULL;
    while(curr!=NULL)
    {
        struct ListNode *currNext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=currNext;
    }
    return prev;
}
bool isPalindrome(struct ListNode* head){
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    struct ListNode *revHead=reverse(slow);
    struct ListNode *curr=head;
    while(curr!=NULL && revHead!=NULL)
    {
        if(curr->val!=revHead->val)
        {
            return false;
        }
        curr=curr->next;
        revHead=revHead->next;
    }
    return true;
}