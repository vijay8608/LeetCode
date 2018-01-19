/*
Determine whether an integer is a palindrome. Do this without extra space.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0 || x != 0 && x % 10 == 0)
        {
            return false;
        }
        
        int sum = 0;
        
        while (x > sum)
        {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
        
        if (x == sum || x == sum / 10)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};