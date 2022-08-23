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
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        ListNode* prev = NULL , *cur = head , *next;
        for(int i=0;i<cnt/2;i++){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        if(cnt & 1) cur = cur->next;
        while(cur!=NULL)
        {
            if(prev->val != cur->val)
                return false;
            prev = prev->next;
            cur = cur->next;
        }
        return true;
    }
};