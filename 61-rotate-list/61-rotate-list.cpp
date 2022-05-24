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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
            return head;
        int cnt = 1;
        ListNode* temp = head;
        while(temp->next !=nullptr)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = head;
        temp = head;
        int rotatePoint = cnt-(k%cnt)-1;
        while(rotatePoint--)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};