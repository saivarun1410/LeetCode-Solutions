/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rev(ListNode* head){
        if(head==NULL) return head;
        ListNode *p=NULL,*c=head,*n=c->next;
        while(c!=NULL){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL) n=n->next;
        }
        return p;
    } 
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head,*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=rev(slow->next);
        ListNode *temp1=head, *temp2=slow->next;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val)return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        slow->next=rev(slow->next);
        return true;
    }
};