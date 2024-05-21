#include <iostream>
using namespace std;

int main()
{

    // UNARY OPERATOR
    int a = 5;
    cout << "Value of a : " << a++ << endl;
    ;
    cout << "Value of a : " << ++a << endl;

    int b = 5;
    cout << "Value of b : " << b-- << endl;
    cout << "Value of b : " << --b << endl;
    cout << endl;

    // BINARY OPERATOR

    // ARITHMETIC
    int c = 10;
    int d = 5;
    cout << c << "+" << d << "=" << c + d << endl;
    cout << c << "-" << d << "=" << c - d << endl;
    cout << c << "*" << d << "=" << c * d << endl;
    cout << c << "/" << d << "=" << c / d << endl;
    cout << c << "%" << d << "=" << c % d << endl;
    cout << endl;

    // RELATIONAL
    cout << (c > d) << endl;
    cout << (c >= d) << endl;
    cout << (c < d) << endl;
    cout << (c <= d) << endl;
    cout << (c != d) << endl;
    cout << (c == d) << endl;
    cout << endl;

    // LOGICAL
    cout << (c > d && c == d) << endl;
    cout << (c > d || c == d) << endl;
    cout << (c != d) << endl;

    // ASSIGNMENT
    a += 1;
    b -= 1;
    c *= 10;
    c /= 5;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}