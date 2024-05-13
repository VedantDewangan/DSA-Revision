#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int i = 1;
    while (i < 11)
    {
        cout << num << " X " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}