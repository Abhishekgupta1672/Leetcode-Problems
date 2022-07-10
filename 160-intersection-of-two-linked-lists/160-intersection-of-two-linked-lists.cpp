class Solution {
public:
    int length(ListNode* head)
    {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 , *ptr2;
        int l1 = length(headA);
        int l2 = length(headB);
        int diff = 0;
        if(l1>=l2)
        {
            ptr1 = headA;
            ptr2 = headB;
            diff = l1-l2;
        }
        else
        {
            ptr1 = headB;
            ptr2 = headA;
            diff = l2-l1;
        }
        while(diff > 0)
        {
            ptr1 = ptr1->next;
            diff--;
        }
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1==ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};