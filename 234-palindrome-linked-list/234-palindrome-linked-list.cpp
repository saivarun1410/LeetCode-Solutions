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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        if(head==NULL) return false;
        vector<int>v;
        vector<int>s;
        while(temp!=NULL){
            v.push_back(temp->val);
            s.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=s[i]) return false;
        }
        return true;
    }
};