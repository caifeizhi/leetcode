class Solution {
public:
    int romanToInt(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int tmp = 0;
        int input = 0, next = 0;
        int i = 0;
        int size = s.size();
        for (i = 0; i < size - 1; i++)
        {
            input = getValue(s[i]);
            next = getValue(s[i + 1]);
            
            if (input < next)
            {
                tmp -= input;
            }
            else
            {
                tmp += input;
            }
        }
        
        if (size >= 1)
        tmp += getValue(s[size - 1]);
        
        return tmp;
    }
    
    int getValue(char c)
    {
        switch(c)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        }         
        
        return 0;
    }
};