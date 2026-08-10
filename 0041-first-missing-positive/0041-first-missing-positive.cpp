class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Put every number at its correct index
        for (int i = 0; i < n; i++) {

            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[i] != nums[nums[i] - 1]) {

                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Step 2: Find the first incorrect position
        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // Step 3: All numbers 1 to n are present
        return n + 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna