#include <iostream>
using namespace std;

int main()
{
    const int maxSize = 18;
    int arr[maxSize];
    int size, key;
    bool found = false;

    cout << "Enter the size of the array (max 18): ";
    cin >> size;

    if (size > maxSize) {
        cout << "Size exceeds the maximum limit of 18." << endl;
        return 1;
    }

    cout << "Enter " << size << " numbers:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched: ";
    cin >> key;

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            cout << "Key found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Key not found." << endl;
    }
    
    return 0;
}
/*
Output
Enter the size of the array (max 18): 4
Enter 4 numbers:
1
2
3
5
Enter the number to be searched: 5
Key found at index 3
*/
