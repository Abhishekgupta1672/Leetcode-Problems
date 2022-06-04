class Solution {
public:
    bool ispossible(vector < int > & A, int pages, int students){
        int cnt = 0;
        int allocsum = 0;
        for(int i=0;i<A.size();i++)
        {
            if(allocsum+A[i]>pages)
            {
                cnt++;
                allocsum = A[i];
                if(allocsum>pages)
                return false;
            }
            else
            {
                allocsum+=A[i];
            }
        }
        if(cnt<students) return true;
        return false;

}
    
    int shipWithinDays(vector<int>& A, int B) {
        if (B > A.size()) return -1;
        int low = A[0];
        int high = 0;
        for(int i=0;i<A.size();i++)
        {
            high+=A[i];
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(ispossible(A,mid,B))
            {
                high = mid-1;
            }
            else
            low = mid+1;
        }
        return low;
        }
};