class Solution {
public:

    void solve(int index, string digits, vector<string>& ans, string current,
               vector<string>& mapping)
    {
        if(index == digits.size())
        {
            ans.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for(char c : letters)
        {
            solve(index + 1, digits, ans, current + c, mapping);
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        if(digits.size() == 0) return ans;

        vector<string> mapping =
        {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(0, digits, ans, "", mapping);

        return ans;
    }
};