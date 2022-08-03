class MedianFinder {
public:
    priority_queue<int>pq1;
    priority_queue<int , vector<int> , greater<int>>pq2;
    bool even = true;
    MedianFinder() {
        even =true;
    }
    
    void addNum(int num) {
        if(even)
        {
            pq2.push(num);
            pq1.push(pq2.top());
            pq2.pop();
        }
        else
        {
            pq1.push(num);
            pq2.push(pq1.top());
            pq1.pop();
        }
        even = !even;
    }
    
    double findMedian() {
        if(even)
        {
            return (pq1.top()+pq2.top())/2.0;
        }
        else
            return pq1.top();
    }
};