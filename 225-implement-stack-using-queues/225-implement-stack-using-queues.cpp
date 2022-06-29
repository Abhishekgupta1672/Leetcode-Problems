class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int sz = q.size();
        while(sz>1)
        {
            q.push(q.front());
            q.pop();
            sz--;
        }
        int pp = q.front();
        q.pop();
        return pp;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};
