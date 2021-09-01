#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    const int *p = &a;
    const int ca = 30;
    int *q;

    cout << "this is the address of memory of a:\t" << &a << "\t this is a's value:\t" << a << endl;
    cout << "this is the address which the p points to:\t" << p << "\tThis is the value pointed to by the address of P:\t" << *p << endl;

    q = const_cast<int *>(p);
    *q = 20;

    cout << "this is the address of memory of a:\t" << &a << "\tthis is a's value:\t" << a << endl;
    cout << "this is the address which the p points to:\t" << p << "\tthis is the value pointed to by the address of p:\t" << *p << endl;
    cout << "this is the address which the q points to:\t" << q << "\tthis is the value pointed to by the address of q:\t" << *q << endl;

    return 0;
}