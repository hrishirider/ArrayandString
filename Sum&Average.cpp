#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / (float)size;

    cout << "Sum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;

    return 0;
}
/*
Output
Enter the size of the array: 3
Enter 3 numbers:
1
2
3
Sum of the array elements: 6
Average of the array elements: 2
*/
