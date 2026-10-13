
#include <iostream>
using namespace std;

int main() {
    int n;
    long long reverse = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative integer";
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    cout << "Reversed number = " << reverse << endl;
    return 0;
}
