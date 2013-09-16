class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool hash[128];
        int max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int j = 0;
            int count = 1;
            for (j = 0; j < 128; j++)
            {
                hash[j] = false;
            }
            
            hash[s[i]] = true; 
            for (j = i + 1; j < s.size(); j++)
            {
                if (hash[s[j]])
                {
                    break;
                }
                hash[s[j]] = true;
                count++;
            }
            if (count > max)
                max = count;
        }
        return max;
    }
};