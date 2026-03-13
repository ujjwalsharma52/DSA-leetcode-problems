class Solution {
public:

    int firstPosition(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                ans = mid;
                right = mid - 1;   // search left part
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return ans;
    }

    int lastPosition(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                ans = mid;
                left = mid + 1;   // search right part
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstPosition(nums, target);
        int last = lastPosition(nums, target);

        return {first, last};
    }
};