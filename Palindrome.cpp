#include <iostream>
using namespace std;
int main() {
    string str;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) 
	{
        if (str[i] != str[n - 1 - i]) 
		{
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
/*
Enter a string: Hello
The string is not a palindrome.
*/
