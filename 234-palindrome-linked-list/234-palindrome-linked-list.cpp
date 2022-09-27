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
    ListNode *rev(ListNode *head){
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
        ListNode *fast=head, *slow=head,*temp=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=rev(slow->next);
        while(slow->next!=NULL){
            if(temp->val!=slow->next->val) return false;
            slow->next=slow->next->next;
            temp=temp->next;
        }
        return true;
    }
};