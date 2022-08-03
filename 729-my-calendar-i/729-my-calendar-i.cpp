class MyCalendar {
public:
    vector<pair<int, int>> calendar;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for (auto it : calendar)
        {
            int s = max(it.first, start);
            int e = min(it.second, end);
            if (s < e) return false;
        }
        calendar.push_back({start, end});
        return true;
    }
};
