class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 , j = height.size()-1 , res = 0;
        while(i<j)
        {
            int h = j-i;
            int w = min(height[i] , height[j]);
            int area = h*w;
            res = max(res , area);
            if(height[i]<height[j])
                i++;
            else if(height[i]>height[j])
                j--;
            else
                i++ , j--;
        }
        return res;
    }
};