
#include <iostream>
using namespace std;

int main() {
    int n;
    long long a = 0, b = 1;

    cout << "Enter number of terms (1 to 93): ";
    cin >> n;

    if (n < 1 || n > 93) {
        cout << "Invalid number of terms";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
