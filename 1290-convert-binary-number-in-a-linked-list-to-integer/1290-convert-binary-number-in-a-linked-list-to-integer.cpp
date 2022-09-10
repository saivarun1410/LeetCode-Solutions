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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            int k=temp->val;
            v.push_back(k);
            temp=temp->next;
        }
        int sum=0;
        int a=0;
        for(int i=v.size()-1;i>=0;i--){
            sum+=pow(2,a)*v[i];
            a++;
        }
        return sum;
    }
};