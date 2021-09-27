#include<iostream>
using namespace std;

int main()
{
    int* pArray;
    pArray = new int[100];
    pArray[0] = 1;
    pArray[99] = 2;

    cout << pArray[1] << endl;
    return 0;
}

