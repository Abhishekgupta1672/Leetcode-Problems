class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1;
        string str = "";
        int carry = 0;
        while(i>=0 && j>=0)
        {
            if(a[i]=='1' && b[j]=='1')
            {
                if(carry==1)
                {
                    str+="1";
                }
                else
                    str+="0";
                carry = 1;
            }
            else if(a[i]=='1' || b[j]=='1'){
                if(carry==1)
                {
                    str+="0";
                }
                else
                {
                    str+="1";
                }  
            }
            else
            {
                if(carry==1)
                {
                    str+="1";
                }
                else
                {
                    str+="0";
                }  
                carry = 0;
            }
            i--;
            j--;
        }
        while(i>=0){
            if(a[i]=='1')
            {
                if(carry==1)
                {
                    str+="0";
                }
                else
                    str+="1";
            }
            else if(a[i]=='0'){
                if(carry==1)
                {
                    str+="1";
                }
                else
                {
                    str+="0";
                }  
                carry = 0;
            }
           i--;
        }
         while(j>=0){
            if(b[j]=='1')
            {
                if(carry==1)
                {
                    str+="0";
                }
                else
                    str+="1";
            }
            else if(b[j]=='0'){
                if(carry==1)
                {
                    str+="1";
                }
                else
                {
                    str+="0";
                }  
                carry = 0;
            }
             j--;
        }
        if(carry)
            str+='1';
        reverse(str.begin(),str.end());  
        return str;
    }
};