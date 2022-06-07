class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(!q2.empty())
            q2.pop();
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        return q2.front();
    }
    
    int top() {
        if(!q2.empty())
            q2.pop();
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        q1.push(q2.front());
        return q2.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
