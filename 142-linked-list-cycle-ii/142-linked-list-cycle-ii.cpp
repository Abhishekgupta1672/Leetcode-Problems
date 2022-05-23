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
    ListNode *detectCycle(ListNode *head) {
        // if(head==nullptr || head->next == nullptr)
        //     return nullptr;
        unordered_map<ListNode* , int>mp;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            mp[temp]++;
            if(mp[temp]>1)
            {
                break;
            }
            temp = temp->next;
        }
        return temp;
    }
};