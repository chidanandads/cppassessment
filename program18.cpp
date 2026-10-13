
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

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    return 0;
}
