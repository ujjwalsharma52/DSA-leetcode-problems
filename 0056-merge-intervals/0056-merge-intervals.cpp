class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        // Step 1: Sort intervals
        sort(intervals.begin(), intervals.end());

        // Step 2: Traverse
        for (auto& interval : intervals) {
            // If result is empty OR no overlap
            if (result.empty() || result.back()[1] < interval[0]) {
                result.push_back(interval);
            } 
            else {
                // Overlap → merge
                result.back()[1] = max(result.back()[1], interval[1]);
            }
        }

        return result;
    }
};