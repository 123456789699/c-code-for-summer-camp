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
        vector<int> tmp1,tmp2;
        ListNode* t;
        t=head;
        while(t){
            tmp1.push_back(t->val);
            t=t->next;
        }
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cur){
            ListNode* n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        t=prev;
        while(t){
            tmp2.push_back(t->val);
            t=t->next;
        }
        if(tmp1==tmp2) return true;
        else return false;
    }
};
