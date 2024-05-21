#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    cout << (marks >= 33 ? "You pass the exam" : "You failed the exam");

    return 0;
}
