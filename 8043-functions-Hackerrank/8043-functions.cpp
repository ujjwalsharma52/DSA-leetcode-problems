#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int maximum = a;

    if (b > maximum)
        maximum = b;

    if (c > maximum)
        maximum = c;

    if (d > maximum)
        maximum = d;

    return maximum;
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d);

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna