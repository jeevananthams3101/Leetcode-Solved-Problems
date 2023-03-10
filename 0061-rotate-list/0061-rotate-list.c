/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL)
    {
        return head;
    }
    struct ListNode *temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp->next=head;
    k=k%count;
    k=count-k;
    while(k-- >0)
    {
        temp=temp->next;
    }
    head=temp->next;
    temp->next=NULL;
    return head;
}