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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp=head->next;
        ListNode *newList=new ListNode(-1);
        ListNode *newListHead=newList;
        if(head==NULL||head->next==NULL)return NULL;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            if(temp->val==0){
                ListNode *list=new ListNode(sum);
                newListHead->next=list;
                newListHead=newListHead->next;
                sum=0;
            }
            temp=temp->next;
        }
        return newList->next;
    }
};

