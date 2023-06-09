class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char p;
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i]>target){
                p=letters[i];
                break;
            }
            else
                p=letters[0];
          }
         return p;
    }
};