class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* head = NULL;
        int carry = 0 , t1 = 0 , t2 = 0;
        while(!s1.empty() || !s2.empty() || carry){
            if(!s1.empty())
            {
                t1 = s1.top();
                s1.pop();
            }
            else t1 = 0;
            
            if(!s2.empty())
            {
                t2 = s2.top();
                s2.pop();
            }
            else t2 = 0;
            
            int res = t1+t2+carry;
            ListNode* newNode = new ListNode(res%10);
            newNode->next = head;
            head = newNode;
            carry = res/10;
        }
        return head;
    }
};