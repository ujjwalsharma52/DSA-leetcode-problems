class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (valueDiff < 0) return false;

        unordered_map<long long, long long> bucket;
        long long size = (long long)valueDiff + 1;

        for (int i = 0; i < nums.size(); i++) {
            long long num = nums[i];

            // Bucket ID
            long long bucketId = num / size;
            if (num < 0) bucketId--;  // handle negative numbers

            // Case 1: Same bucket
            if (bucket.count(bucketId)) return true;

            // Case 2: Neighbor buckets
            if (bucket.count(bucketId - 1) && 
                abs(num - bucket[bucketId - 1]) <= valueDiff)
                return true;

            if (bucket.count(bucketId + 1) && 
                abs(num - bucket[bucketId + 1]) <= valueDiff)
                return true;

            // Insert current number
            bucket[bucketId] = num;

            // Maintain window of size indexDiff
            if (i >= indexDiff) {
                long long oldNum = nums[i - indexDiff];
                long long oldBucketId = oldNum / size;
                if (oldNum < 0) oldBucketId--;
                bucket.erase(oldBucketId);
            }
        }

        return false;
    }
};