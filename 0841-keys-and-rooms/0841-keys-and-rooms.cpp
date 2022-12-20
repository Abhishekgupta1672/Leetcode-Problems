class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>vis(n,0);
        vis[0] = 1;
        stack<int>st;
        st.push(0);
        while(!st.empty()){
            int tp = st.top();
            st.pop();
            for(int itr : rooms[tp]){
                if(!vis[itr]){
                    vis[itr] = 1;
                    st.push(itr);
                }
            }
        }
        for(auto x : vis){
            if(!x) return false;
        }
        return true;
    }
};