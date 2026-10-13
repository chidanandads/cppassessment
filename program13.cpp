
#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        prime = false;
    } else {
        for (int i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
