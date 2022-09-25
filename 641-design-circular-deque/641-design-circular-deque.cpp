class MyCircularDeque {
private:
    int head, tail, size, capacity;
    vector<int> q;    
    
public:
    MyCircularDeque(int k) : head(0), tail(0), capacity(k), size(0), q(vector<int>(k, 0)) {}
    
    bool insertFront(int value) {
        if (isFull()) return false;
        head = head == 0 ? capacity - 1 : head - 1;
        q[head] = value;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        q[tail++] = value;
        tail %= capacity;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        head = (head + 1) % capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        tail = tail == 0 ? capacity - 1 : tail - 1;
        size--;
        return true;
    }
    
    int getFront() {
        return isEmpty() ? -1 : q[head];
    }
    
    int getRear() {
        return isEmpty() ? -1 : tail == 0 ? q[capacity-1]: q[tail-1];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
    

};