class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;
        
        for (char ch : columnTitle) {
            int value = ch - 'A' + 1;
            result = result * 26 + value;
        }
        
        return result;
    }
};