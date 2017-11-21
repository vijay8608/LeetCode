/*
Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".
*/

class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry = 0;
        
        string result = "";
        
        int i, j;
        
        for ( i = a.length()-1, j = b.length()-1; i >= 0 || j >= 0 || carry == 1; i,j )
        {
            if ( i >= 0)
            {
                if (a[i] == '0')
                {
                    carry = carry + 0;
                }
                else
                {
                    carry = carry + 1;
                }
                
                i--;
            }
            else
            {
                carry = carry + 0;
            }
            
            if ( j >= 0)
            {
                if (b[j] == '0')
                {
                    carry = carry + 0;
                }
                else
                {
                    carry = carry + 1;
                }
                j--;
            }
            else
            {
                carry = carry + 0;
            }
            
            result = char (carry % 2 + '0') + result;
            
            carry = carry / 2;
        }
        
        return result;
        
    }
};