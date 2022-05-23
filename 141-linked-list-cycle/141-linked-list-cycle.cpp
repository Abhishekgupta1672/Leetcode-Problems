/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int cnt = 0;
        if(!head)
            return false;
        while(head)
        {
            if(cnt>100000)
                break;
            cnt++;
            head = head->next;
        }
        return cnt>100000?true:false;
    }
};