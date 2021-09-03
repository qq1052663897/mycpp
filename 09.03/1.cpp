#include<iostream>
using namespace std;

void SwapValue(int a, int b)
{
    a ^= b;
    b ^= a;
    a ^= b;

    cout << "inside the function of SwapValue, a is :" << a << "\t\t b is : " << b << endl;
}

void SwapRef(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;

    cout << "inside the function of SwapRef, a is :\t\t" << a << " b is : " << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "before that to exchange the value of a an of b, a is : " << a << " b is :" << b << endl;
    
    SwapValue(a, b);

    cout << "after that to run the function of SwapValue, a is :\t\t" << a << "\t\t, b is :" << b << endl;

    a = 10;
    b = 20;

    SwapRef(a, b);
    cout << "after that to run the function of SwapRef, a is :\t\t" << a << "\t\t, b is :" << b << endl;
    
    return 0;
}