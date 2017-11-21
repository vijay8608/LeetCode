/*
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.
*/

class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                if (s[i+1] == 'V')
                {
                    result = result + 4;
                    i++;
                }
                else if (s[i+1] == 'X')
                {
                    result = result + 9;
                    i++;
                }
                else
                {
                    result = result + 1;
                }
            }
            else if (s[i] == 'X')
            {
                if (s[i+1] == 'L')
                {
                    result = result + 40;
                    i++;
                }
                else if (s[i+1] == 'C')
                {
                    result = result + 90;
                    i++;
                }
                else
                {
                    result = result + 10;
                }
            }
            else if (s[i] == 'C')
            {
                if (s[i+1] == 'D')
                {
                    result = result + 400;
                    i++;
                }
                else if (s[i+1] == 'M')
                {
                    result = result + 900;
                    i++;
                }
                else
                {
                    result = result + 100;
                }
            }
            else if (s[i] == 'V')
            {
                result = result + 5;
            }
            else if (s[i] == 'L')
            {
                result = result + 50;
            }
            else if (s[i] == 'D')
            {
                result = result + 500;
            }
            else if (s[i] == 'M')
            {
                result = result + 1000;
            }
        }
        
        return result;
        
    }
};