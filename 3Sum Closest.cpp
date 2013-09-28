class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        
        if (num.size() < 3)
        {
            return -1;
        }
        
        int minSum = num[0] + num[1] + num[2];
        int min = minSum - target > 0 ? minSum - target : target - minSum;
        int i = 0;
        for (i = 0; i < num.size(); i++)
        {
            int j = i + 1;
            int k = num.size() - 1;
            while(j < k)
            {
                int sum = num[i] + num[j] + num[k];
                int tmp = sum - target > 0 ? sum - target : target - sum;
                if (tmp < min)
                {
                    min = tmp;
                    minSum = sum;
                }
                if (sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        return minSum;
    }
};