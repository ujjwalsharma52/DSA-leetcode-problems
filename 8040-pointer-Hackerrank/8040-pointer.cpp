#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    cin >> a >> b;

    update(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna