class Solution {
public:
    ListNode* merge(ListNode* &l1,ListNode* &l2){
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* temp = NULL;
        if(l1->val <= l2->val){
            temp = l1;
            temp->next = merge(l1->next,l2);
        }
        else{
            temp = l2;
            temp->next = merge(l1,l2->next);
        }
        return temp;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        ListNode* ans = NULL;
        for(auto l : lists){
            ans = merge(ans,l);
        }
        return ans;
    }
};