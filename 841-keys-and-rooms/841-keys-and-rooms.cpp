class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>v(n,false);
        v[0] = true;
        stack<int>st;
        st.push(0);
        while(!st.empty())
        {
            int tp = st.top();
            st.pop();
            for(auto itr:rooms[tp])
            {
                if(!v[itr])
                {
                    v[itr] = true;
                    st.push(itr);
                }
            }
        }
        for(bool x:v)
        {
            if(!x) return false;
        }
        return true;
    }
};