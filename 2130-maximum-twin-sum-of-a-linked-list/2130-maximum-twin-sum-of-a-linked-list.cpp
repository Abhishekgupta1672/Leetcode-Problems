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
    void Reverse(ListNode** head)
    {
        ListNode* cur = *head , *prev = NULL , *next;
        while(cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        *head = prev;
    }
    
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = slow->next;
        Reverse(&slow);
        int ans = 0;
        while(slow != NULL){
            ans = max(ans,head->val+slow->val);
            slow = slow->next;
            head = head->next;
        }
        return ans;
    }
};