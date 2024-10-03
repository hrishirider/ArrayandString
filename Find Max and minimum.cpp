#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Please Enter Size Of the Array: ";
    cin >> size;

    int arr[size];
    cout << "Please Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << "The maximum value is " << max << endl;
    cout << "The minimum value is " << min << endl;

    return 0;
}
/*
Output
Please Enter Size Of the Array: 5
Please Enter 5 numbers:
10
15
20
5
0
The maximum value is 20
The minimum value is 0
*/
