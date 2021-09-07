#include<iostream>
using namespace std;

int OneX = 10;
int OneY = 20;
int & refValue(int &x)
{
    return x;
}

int main()
{
    refValue(OneX) = 10 + 10;
    cout << "OneX:" << OneX << endl;

    refValue(OneY) = 20 + 20;
    cout << "OneY:" << OneY << endl;

    return 0;
}