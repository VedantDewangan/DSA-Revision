#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age > 18)
    {
        cout << "You can apply for diving licence" << endl;
    }
    else
    {
        cout << "You cannot apply for diving licence" << endl;
    }
    return 0;
}
