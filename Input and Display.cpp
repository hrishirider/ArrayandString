#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Please Enter size: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Please Enter Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The elements are:\n";
    for(int j = 0; j < size; j++)
    {
        cout << arr[j] << "\n";
    }

    return 0;
}
/*
Output
Please Enter size: 3
Please Enter Number 1: 23
Please Enter Number 2: 45
Please Enter Number 3: 78
The elements are:
23
45
78
*/
