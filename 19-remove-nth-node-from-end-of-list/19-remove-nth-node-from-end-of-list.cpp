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
        ListNode* temp = head;
        int cnt = 0;
        while(temp!= NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int pos = len-n;
        ListNode* temp = head;
        if(pos==0)
        {
            return head->next;
        }
        for(int i=1;i<pos;i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};