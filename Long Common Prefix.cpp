class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function 
        
        if (strs.size() <= 0)
            return "";
            
        string commonPrefix = strs[0];
        int i = 0;
        for (i = 1; i < strs.size(); i++)
        {
            commonPrefix = getCommonPrefix(commonPrefix,strs[i]);
        }
        
        return commonPrefix;
    }
    string getCommonPrefix(string str1,string str2)
    {
        string str = "";
        int i = 0;
        for (i = 0; i < str1.size() && i < str2.size(); i++)
        {
            if (str1[i] == str2[i])
            {
                str += str1[i];
            }
            else
            {
                break;
            }
        }
        
        return str;
    }
};