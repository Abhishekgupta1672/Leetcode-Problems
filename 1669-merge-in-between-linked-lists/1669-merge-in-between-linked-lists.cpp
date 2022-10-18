class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start = NULL , *end = list1;
        for(int i=0;i<b;i++){
            if(i==a-1) start = end;
            end = end->next;
        }
        start->next = list2;
        while(list2->next != NULL){
            list2 = list2->next;
        }
        list2->next = end->next;
        end->next = NULL;
        return list1;
    }
};