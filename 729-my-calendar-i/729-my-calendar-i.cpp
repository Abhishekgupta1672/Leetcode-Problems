class MyCalendar {
public:
    vector<pair<int, int>> calendar;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for (auto [s, e] : calendar)
            if (max(s, start) < min(e, end)) return false;
        calendar.push_back({start, end});
        return true;
    }
};
