class MyHashMap {
public:
    vector<vector<pair<int , int>>>map;
    const int size = 10000;
    MyHashMap() {
        map.resize(size);
    }
    
    void put(int key, int value) {
        int index = key%size;
        vector<pair<int , int>>&row = map[index];
        for(auto itr = row.begin();itr!=row.end();itr++)
        {
            if(itr->first==key)
            {
                itr->second = value;
                return;
            }
        }
        row.push_back(make_pair(key , value));
    }
    
    int get(int key) {
        int index = key%size;
        vector<pair<int , int>>&row = map[index];
        for(auto itr = row.begin();itr!=row.end();itr++)
        {
            if(itr->first==key)
            {
                return itr->second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key%size;
        vector<pair<int , int>>&row = map[index];
        for(auto itr = row.begin();itr!=row.end();itr++)
        {
            if(itr->first==key)
            {
                row.erase(itr);
                return;
            }
        }
    }
};