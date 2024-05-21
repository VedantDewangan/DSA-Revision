#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int num1;
    cout << "Enter the first number : ";
    cin >> num1;

    int num2;
    cout << "Enter the second number : ";
    cin >> num2;

    char op;
    cout << "Enter the operation (+,-,*,/) : ";
    cin >> op;

    switch (op)
    {
    case '+':
        sum(num1, num2);
        break;
    case '-':
        sub(num1, num2);
        break;
    case '*':
        multi(num1, num2);
        break;
    case '/':
        divide(num1, num2);
        break;
    default:
        cout << "Wring Input";
        break;
    }

    return 0;
}