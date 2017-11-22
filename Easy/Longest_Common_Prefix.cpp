/*
Write a function to find the longest common prefix string amongst an array of strings.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int smalleststring = 0;
        string result="";
        char current ;
        
        for (int i = 0 ; i < strs.size() ; i++)
        {
            if (smalleststring == 0 || smalleststring > strs[i].length())
                smalleststring = strs[i].length();
        }
        
        for (int i = 0; i < smalleststring ; i++)
        {   
            current = strs[0][i];
            
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != current)
                {
                    return result;
                }
            }
            
            result = result + current;
        }
        
        return result;
        
    }
};