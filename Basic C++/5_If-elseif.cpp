#include <iostream>
using namespace std;

int main()
{

    int hrs;
    cout << "Enter time Hours (not in AM/PM) : ";
    cin >> hrs;

    if (hrs < 0)
    {
        cout << "Wrong Input";
    }
    else if (hrs >= 17)
    {
        cout << "Good Evening";
    }
    else if (hrs >= 12)
    {
        cout << "Good Afternoon";
    }
    else
    {
        cout << "Good Morning";
    }

    return 0;
}