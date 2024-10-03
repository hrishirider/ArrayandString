//Otniel Jhirad
//ENTC A3
//23070123069
#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout<<"Please Enter Your String ";
    cin>>word;
    int length = word.length();
    for (int i = length - 1; i >= 0; i--) 
	{
        cout << word[i];
    }
    cout << endl;

    return 0;
}
/*Output
Please Enter Your String hello
olleh
*/


