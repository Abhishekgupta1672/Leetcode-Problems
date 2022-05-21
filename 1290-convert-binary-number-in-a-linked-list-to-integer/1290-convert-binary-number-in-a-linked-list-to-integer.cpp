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
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        while(head!=NULL)
        {
           v.push_back(head->val);
           head = head->next;
        }
        int cnt = 0 , sum = 0;
        for(int i=0;i<v.size();i++)
        {
            int n = pow(2,cnt);
            cnt++;
            sum +=(v[v.size()-1-i]*n);
        }
        return sum;
    }
};