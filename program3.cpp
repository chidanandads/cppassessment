
#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swap(a, b);

    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}
