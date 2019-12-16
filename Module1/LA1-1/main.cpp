#include <iostream>
using namespace std;
int main()
{
int age; // int: signed integers

    //cout: for system output
    cout <<" Now inside VSCode and GITHub" <<endl;
    cout << "another line under namespace std" << endl;
    cout << " wildcats "<<" WSU"<<" Ogden "<<endl;
    // cin: for System/user input
    cout << "How old are you in years?" << endl;
    cin >> age;
    cout << "i see you are: " << age << endl;
    // get the size of the variable
    cout << "integers are: " << sizeof(int) << "bytes." << endl;
    cout << "Min Integr value: " << INT32_MIN << "\n"
      "Max Integer value: " << INT32_MAX << "bytes" << endl;

    return 0;
}