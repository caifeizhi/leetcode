class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i = 0, j = 0, k = 0, l = 0;
        int lastI = 0, lastJ = 0;
        
        vector<vector<int>> res;
        if (num.size() < 4)
        {
            return res;
        }
        
        sort(num.begin(), num.end());
        for (i = 0; i < num.size(); i++)
        {
            if (i > 0 && num[i] == num[i - 1])
            {
                continue;
            }
            
            for(j = i + 1; j < num.size(); j++)
            {
                if (j > i + 1 && num[j] == num[j - 1])
                {
                    continue;
                }
                
                k = j + 1;
                l = num.size() - 1;
                while(k < l)
                {
                    if (k > j + 1 && num[k] == num[k -1])
                    {
                        k++;
                        continue;
                    }
                    
                    int sum = num[i] + num[j] + num[k] + num[l];
                    if (sum == target)
                    {
                        vector<int> tmp;
                        tmp.push_back(num[i]);
                        tmp.push_back(num[j]);
                        tmp.push_back(num[k]);
                        tmp.push_back(num[l]);
                        res.push_back(tmp);
                        k++;
                        l--;
                    }
                    else
                    {
                        if (sum < target)
                        {
                            k++;
                        }
                        else
                        {
                            l--;
                        }
                    }
                }
            }
        }
        return res;
    }
    
};