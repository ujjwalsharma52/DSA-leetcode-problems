#include <queue>
using namespace std;

class MedianFinder {
    priority_queue<int> left; // max heap
    priority_queue<int, vector<int>, greater<int>> right; // min heap

public:
    MedianFinder() {}

    void addNum(int num) {
        // Step 1: add to max heap
        left.push(num);

        // Step 2: largest of left goes to right
        right.push(left.top());
        left.pop();

        // Step 3: balance sizes
        if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if (left.size() > right.size()) {
            return left.top();
        }
        return (left.top() + right.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna