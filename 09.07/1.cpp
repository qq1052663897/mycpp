/*
 * 引用
 * @Author: Ron 
 * @Date: 2021-09-07 09:31:18 
 * @Last Modified by: Ron
 * @Last Modified time: 2021-09-07 09:33:08
 */
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