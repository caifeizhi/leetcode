class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (x < 0)
        {
            return false;
        }
        
        long long tmp = 0;
        int ori = x;
        while (x > 0)
        {
            tmp = x % 10 + tmp * 10;
            x = x / 10;
        }
        
        if ((int)tmp == ori)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};