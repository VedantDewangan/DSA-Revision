#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter your day : ";
    cin >> day;

    switch (day)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;

    default:
        cout << "Saturday";
        break;
    }

    return 0;
}