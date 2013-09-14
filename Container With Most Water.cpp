class Solution {
public:
    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int max = 0;
        int i = 0, j = 0;
        int size = height.size();
        for (i = 0; i < size; i++)
        {
            for (j = size - 1; j > i; j--)
            {
                if (height[j] >= height[i])
                {
                    if (height[i] * (j - i) > max)
                    {
                        max = height[i] * (j - i);
                    }
                    break;
                }
                else
                {
                    if (height[j] * (j - i) > max)
                    {
                        max = height[j] * (j - i);
                    }
                }
            }
        }
        
        return max;
    }
};