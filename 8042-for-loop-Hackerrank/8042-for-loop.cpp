#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = n; i <= m; i++) {
        if (i >= 1 && i <= 9) {
            cout << words[i] << endl;
        }
        else if (i % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna