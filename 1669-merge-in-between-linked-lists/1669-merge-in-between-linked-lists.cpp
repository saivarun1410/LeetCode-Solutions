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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *end=list2;
        while(end->next){
            end=end->next;
        }
        ListNode *start=NULL;
        ListNode *temp=list1;
        int count=0;
        while(count!=a&&temp!=NULL){
            start=temp;
            temp=temp->next;
            count++;
        }
        while(count!=b&&temp!=NULL){
            temp=temp->next;
            count++;
        }
        start->next=list2;
        end->next=temp->next;
        return list1;
    }
};
