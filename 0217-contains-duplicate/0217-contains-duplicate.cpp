class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int num : nums) {
            if (st.count(num)) {
                return true;  // duplicate found
            }
            st.insert(num);
        }

        return false; // all elements are distinct
    }
};