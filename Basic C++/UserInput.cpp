#include <iostream>
using namespace std;

int main()
{

    char gender;
    cout << "Enter your gender : ";
    cin >> gender;

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    float CPI;
    cout << "What is your CPI ? ";
    cin >> CPI;

    bool age;
    cout << "Are You 18+ (1/0) ? ";
    cin >> age;

    cout << "Your gender is " << gender << endl;
    cout << "Your makrs is " << marks << endl;
    cout << "Your CPI is " << CPI << endl;
    cout << "Your Are 18+ ? " << age << endl;

    return 0;
}