class Solution {
public:
    int maxHeight(int h , vector<int>&horizontalCuts)
    {
        sort(horizontalCuts.begin() , horizontalCuts.end());
        int sz = horizontalCuts.size();
        int maxH = max(horizontalCuts[0] ,h-horizontalCuts[sz-1]);
        for(int i=1;i<sz;i++)
        {
            maxH = max(maxH , horizontalCuts[i]-horizontalCuts[i-1]);
        }
        return maxH;
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        return (int)((long)maxHeight(h , horizontalCuts)*maxHeight(w , verticalCuts)%1000000007);
    }
};