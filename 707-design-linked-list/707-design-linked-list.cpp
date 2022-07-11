class MyLinkedList {
public:
    ListNode* head = NULL;
    MyLinkedList() {
        
    }
    int len(ListNode* head)
    {
        int cnt=0;
        while(head)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    int get(int index) {
        ListNode* temp = head;
        for(int i=0;i<index && temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp==NULL)
            return -1;
        return temp->val;
    }
    void addAtHead(int val) {
        ListNode* temp = new ListNode(val);
        if(!head) head=temp;
        else 
        {
            temp->next = head;
            head=temp;
        }
    }
    void addAtTail(int val) {
        ListNode* temp = new ListNode(val);
        if(head==NULL)
        {
            head=temp;
            return;
        }
        ListNode* curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
    }
    void addAtIndex(int index, int val) {
        ListNode* temp=new ListNode(val);
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        ListNode* curr=head;
        for(int i=0;i<index-1 && curr!=NULL;i++)
        {
            curr=curr->next;
        }
        if(curr==NULL)
            return;
        temp->next=curr->next;
        curr->next=temp;
    }            
    void deleteAtIndex(int index) {
        if(index==0)
        {
            head=head->next;
            return;
        }
        if(index>len(head)-1)
            return;
        ListNode* curr=head;
        for(int i=0;i<index-1;i++)
        {
            curr=curr->next;
        }
        curr->next=curr->next->next;
    }
};