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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            if(m[temp->val]){
                while(temp->next!=NULL&&m[temp->val]){
                    temp=temp->next;
                }
                count++;
            }
            temp=temp->next;
        }
        return count;
    }
};