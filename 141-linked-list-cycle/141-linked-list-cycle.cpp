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
        unordered_map<ListNode* , bool>mp;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            if(mp.find(cur)!=mp.end())
                return true;
            else
                mp[cur] = true;
            cur = cur->next;
        }
        return false;
    }
};