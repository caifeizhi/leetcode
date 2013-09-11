class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        string* strArr = new string[nRows];
        int level = 0;
        bool isDown = true;
        for (int i = 0; i < s.size(); i++)
        {
            strArr[level].push_back(s[i]);
            if (isDown)
            {
                if (level == nRows - 1)
                {
                    if (level != 0)
                    {
                        level--;
                    }
                    isDown = false;
                }
                else
                {
                    level++;
                }
            }
            else
            {
                if (level == 0)
                {
                    if (level != nRows - 1)
                    {
                        level++;
                    }
                    isDown = true;
                }
                else
                {
                    level--;
                }
            }
        }
        string res = "";
        for (int i = 0; i < nRows; i++)
        {
            res = res + strArr[i];
        }
        
        return res;
    }
};