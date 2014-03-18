class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string digitToChar[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res, tmp;
        res.push_back("");
        for (int i = 0; i < digits.size(); i++){
            tmp.clear();
            for (int j = 0; j < res.size(); j++){
                for (int k = 0; k < digitToChar[digits[i] - '2'].size(); k++){
                    tmp.push_back(res[j] + digitToChar[digits[i] - '2'][k]);
                }
            }
            res = tmp;
        }
        return res;
    }
};