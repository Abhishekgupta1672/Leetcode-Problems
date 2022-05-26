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
    int length(ListNode* head)
    {
        int cnt=0;
        ListNode* temp = head;
        while(temp)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);
        if( head->next == NULL)
            return NULL;
        int len = length(head);
        ListNode* temp = head;
        int i=1;
        while(i<len/2)
        {
            temp = temp->next;
            i++;
        } 
        temp->next = temp->next->next; 
        return head;
    }
};