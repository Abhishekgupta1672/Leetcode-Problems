class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
          vector<vector<int>> v(a[0].size());
        for(int i = 0 ; i < a[0].size(); i++){
            for(int j = 0 ; j < a.size() ; j++){
                v[i].push_back(a[j][i]);
            }
        }
        return v;
    }
};