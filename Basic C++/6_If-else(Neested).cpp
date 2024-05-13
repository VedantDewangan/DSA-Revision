#include <iostream>
using namespace std;

int main()
{

    int years;
    cout << "Enter year : ";
    cin >> years;

    if (years % 4 == 0)
    {
        if (years % 100 == 0)
        {
            if (years % 400 == 0)
            {
                cout << "Leap Year";
            }
            else
            {
                cout << "Not Leap Year";
            }
        }
        else
        {
            cout << "Leap Year";
        }
    }
    else
    {
        cout << "Not Leap Year";
    }

    return 0;
}