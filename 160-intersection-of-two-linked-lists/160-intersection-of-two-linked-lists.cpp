class Solution {
public:
    int length(ListNode* head)
    {
        int l=0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            l++;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = length(headA);
        int l2 = length(headB);
        ListNode* ptr1 , *ptr2;
        int diff = 0;
        if(l1>=l2)
        {
            diff = l1-l2;
            ptr1 = headA;
            ptr2 = headB;
        }
        else
        {
            diff = l2-l1;
            ptr2 = headA;
            ptr1 = headB;
        }
        while(diff>0)
        {
            if(ptr1==NULL)
                return NULL;
            ptr1 = ptr1->next;
            diff--;
        }
        while(ptr1!=NULL && ptr2!=NULL)
        {
           if(ptr1 == ptr2)
               return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};