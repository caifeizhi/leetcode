class Solution {
public:
    string longestPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int max = 0, maxStart = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int start = i - 1, end = i + 1;
            int count = 1;
            while (start >= 0 && end <= s.size() - 1)
            {
                if (s[start] != s[end])
                {
                    break;
                }
                count += 2;
                start--;
                end++;
            }
            
            if (count > max)
            {
                max = count;
                maxStart = start + 1;
            }
            
            if (i + 1 <= s.size() - 1)
            {
                start = i , end = i + 1;
                count = 0;
                if (s[start] == s[end])
                {
                    while(start >= 0 && end <= s.size() - 1)
                    {
                        if (s[start] != s[end])
                        {
                            break;
                        }
                        count += 2;
                        start--;
                        end++;
                    }
                    
                    if (count > max)
                    {
                        max = count;
                        maxStart = start + 1;
                    }
                }
            }
        }
        
        return s.substr(maxStart, max);
    
    }
};