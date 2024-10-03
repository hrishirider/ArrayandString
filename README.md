# Arrays-and-strings
# Aim:   
To use and implement C++ Arrays and string.
# Software Used: 
Visual Studio Code
# Theory: 
## Arrays:
An array in C++ is a collection of elements of the same data type, stored in contiguous memory locations. Arrays provide a way to store multiple values under a single variable name, accessible via an index.
### Syntax:
`data_type array_name[array_size];`
```cpp
#include<iostream>
using namespace std;
int main()
{
    int x[6] = {1,4,7,8,3,9};
    int i;
    for (i=0;i<6;i++)
    {
        cout<<x[i]<<endl;
    }
}
```
## Strings:
In C++, a string is an array of characters terminated by a null character ('\0'). Strings in C++ can be handled using either C-style strings (character arrays) or the std::string class from the Standard Library.
### Syntax:
`char str[10] = "Hello";`
```cpp
#include<iostream>
using namespace std;
int main()
{
    char str1[4] = "C++";
    char str2[] = {'s','+','+','\0'};
    string str3 = "C++";

    cout<<str1<<endl<<str2<<endl<<str3;
}
```
# Algorithms: 
### Sum of elements: 
Step 1: Start.

Step 2: Declare an integer array x of size 6, integer variables i, sum, and avg.

Step 3: Initialize sum to 0.

Step 4: Display the message "Enter array: " to prompt the user for input.

Step 5: Use a for loop to iterate from i = 0 to i < 6:   
Step 5.1: In each iteration, take input from the user and store it in the array x[i].

Step 6: Display the message "The entered elements are: ".

Step 7: Use another for loop to iterate from i = 0 to i < 6:   
Step 7.1: In each iteration, print the element x[i].

Step 8: Use a for loop to iterate from i = 0 to i < 6:   
Step 8.1: In each iteration, add the value of x[i] to sum.

Step 9: After the loop, print the sum of the elements using the message "The sum of elements is: " followed by the value of sum.

Step 10: Calculate the average of the elements by dividing sum by 6 and store the result in avg.

Step 11: Print the average of the elements using the message "The average of elements is: " followed by the value of avg.

Step 12: End.

### Reversing a string:
Step 1: Start.

Step 2: Declare a string variable a.

Step 3: Display the message "Enter a string: " to prompt the user for input.

Step 4: Read the input string from the user and store it in the variable a.

Step 5: Calculate the length of the string a and store it in an integer variable n.

Step 6: Use a for loop to iterate from i = n-1 down to i >= 0:   
Step 6.1: In each iteration, print the character a[i].

Step 7: End.
