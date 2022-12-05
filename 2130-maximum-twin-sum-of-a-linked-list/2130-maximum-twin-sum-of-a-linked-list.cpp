class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head , *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL , *next;
        while(slow != NULL){
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        int ans = 0;
        while(prev){
            ans = max(ans , head->val+prev->val);
            head = head->next;
            prev = prev->next;
        }
        return ans;
    }
};