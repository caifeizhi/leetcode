class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        long long int tmp = 0;
        int i = 0;
        bool isNeg = false;
        int stat = 0;
        
        while(str[i] != 0)
        {
            if (str[i] == '-')
            {
                if (stat == 0)
                {
                    isNeg = true;
                    stat = 1;
                    i++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            
            if (str[i] == '+')
            {
                if (stat == 0)
                {
                    isNeg = false;
                    stat = 1;
                    i++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            
            if (str[i] >= '0' && str[i] <= '9')
            {    
                if (stat == 0)
                {
                    stat = 1;
                }
                tmp = tmp * 10 + str[i] - '0';
            }
            else
            {
                if (stat == 1)
                {
                    break;
                }
                if (stat == 0)
                {
                    if (str[i] != ' ')
                    break;
                }
            }
            
            i++;    
        }
        
        if (isNeg)
        {
            tmp = -tmp;
        }
        
        if (tmp > INT_MAX)
        {
            return INT_MAX;
        }
        
        if (tmp < INT_MIN)
        {
            return INT_MIN;
        }
        
        return (int)tmp;
    }
};