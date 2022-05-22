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
        int l = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            l++;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = length(headA);
        int l2 = length(headB);
        int diff = 0;
        ListNode* ptr1 , *ptr2;
        if(l1>=l2)
        {
            diff = l1-l2;
            ptr1 = headA;
            ptr2 = headB;
        }
        else
        {
            diff = l2-l1;
            ptr1 = headB;
            ptr2 = headA;
        }
        while(diff--)
        {
            if(ptr1==NULL)
                return NULL;
            else
                ptr1 = ptr1->next;
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