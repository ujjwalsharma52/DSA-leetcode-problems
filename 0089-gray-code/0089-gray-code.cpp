class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;

        for (int i = 0; i < (1 << n); i++) {
            ans.push_back(i ^ (i >> 1));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna