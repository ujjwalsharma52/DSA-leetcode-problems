class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact = 1;

        for (int i = 1; i < n; i++) {
            fact *= i;
            nums.push_back(i);
        }
        nums.push_back(n);

        k--; // Convert to 0-based indexing

        string ans = "";

        while (true) {
            ans += to_string(nums[k / fact]);
            nums.erase(nums.begin() + (k / fact));

            if (nums.empty())
                break;

            k %= fact;
            fact /= nums.size();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna