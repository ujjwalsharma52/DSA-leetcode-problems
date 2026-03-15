#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    void backtrack(vector<int>& nums, vector<bool>& used, 
                   vector<int>& temp, vector<vector<int>>& ans) {
        
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++){

            if(used[i])
                continue;

            if(i > 0 && nums[i] == nums[i-1] && !used[i-1])
                continue;

            used[i] = true;
            temp.push_back(nums[i]);

            backtrack(nums, used, temp, ans);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        backtrack(nums, used, temp, ans);

        return ans;
    }
};