
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size (1 to 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    int arr[100];
    long long sum = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
