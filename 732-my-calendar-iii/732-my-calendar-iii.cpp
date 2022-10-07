class MyCalendarThree {
public:
    int maxCnt = 0;
    map<int,int>mp;
    MyCalendarThree() {

    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int cnt = 0;
        for (auto x:mp) {
            cnt += x.second;
            maxCnt = max(cnt, maxCnt);
        }
        return maxCnt;
    }
};