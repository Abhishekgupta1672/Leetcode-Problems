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
    int length(ListNode* head)
    {
        int l=0;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            temp = temp->next;
            l++;
        }
        return l;
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
            ptr2 = headA;
            ptr1 = headB;
            diff = l2-l1;
        }
        while(diff>0)
        {
            ptr1=ptr1->next;
            diff--;
        }
        while(ptr1!=NULL || ptr2!=NULL)
        {
            if(ptr1==ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};