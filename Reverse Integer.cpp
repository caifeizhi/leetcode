class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> s;
        bool isNeg = false;
        if (x < 0)
        {
            isNeg = true;
            x = -x;
        }
        
        while(x > 0)
        {
            s.push_back(x % 10);
            x = x / 10;
        }
        
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            res = res * 10 + s[i];
        }
        
        return isNeg ? -res : res;
    }
};