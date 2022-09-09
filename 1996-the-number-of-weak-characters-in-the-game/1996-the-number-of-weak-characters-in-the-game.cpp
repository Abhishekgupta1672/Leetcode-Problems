class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]) 
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
      sort(properties.begin(), properties.end(), cmp); 
        // for(int i=0;i<properties.size();i++){
        //     for(int j=0;j<2;j++){
        //         cout<<properties[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
      int maxS = INT_MIN;                            
      int ans = 0;
      for (int i=properties.size()-1;i>=0;i--)
      {
           if (properties[i][1] < maxS) ans++;
           maxS = max(maxS, properties[i][1]);
      }
      return ans;
    }
};