class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        while(q.size() != 1)
        {
            int round = k;
            while(round>1)
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                round--;
            }
            q.pop();
        }
        return q.front();
    }
};