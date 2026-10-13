
#include <iostream>
using namespace std;

int main() {
    int n, original;
    long long reverse = 0;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Not a palindrome";
        return 0;
    }

    original = n;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
