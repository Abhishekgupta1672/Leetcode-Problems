class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head , *right = head , *curr = head;
        int cnt = 1;
        while(curr != nullptr)
        {
            if(cnt<k)
                left = left->next;
            if(cnt>k)
                right = right->next;
            curr = curr->next;
            cnt++;
        }
        // cout<<left->val<<" "<<right->val;
        swap(left->val , right->val);
        return head;
    }
};