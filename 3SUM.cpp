class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        vector<vector<int>> ans;
        int i =0, j =0, k = 0;
        int lastNum = 0;
        
        for (i = 0; i < num.size(); i++)
        {
            while (i > 0 && num[i] == num[i - 1])
            {
                i++;
                if (i >= num.size())
                {
                    break;
                }
            }
            
            if (i >= num.size())
            {
                break;
            }
            
            j = i + 1;
            k = num.size() - 1;
            
            while (j < k)
            {
                while(j > i + 1 && num[j] == num[j - 1])
                {
                    j++;
                    if (j >= k)
                    {
                        break;
                    }
                }
                
                if (j >= k)
                {
                    break;
                }
                
                if (num[i] + num[j] + num[k] == 0)
                {
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[j]);
                    temp.push_back(num[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                }
                else
                {
                    if (num[i] + num[j] + num[k] < 0)
                    {
                        j++;
                    }
                    else
                    {
                        k--;
                    }
                }    
            }
            
        }
        
        return ans;
    }
};