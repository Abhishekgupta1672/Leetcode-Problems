class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        // int t = 0;
        while(head!=NULL)
        {
            int t = st.top();
            st.pop();
            if(head->val != t)
                return false;
            head = head->next;
        }
        return true;
    }
};