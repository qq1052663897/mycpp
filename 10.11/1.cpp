#include <iostream>
#include <string>
using namespace std;

static int glos = 10;

void f()
{
    int i = 0;
    static int in = 1;
    cout << "i(自动变量):" << i << ",in(局部静态):" << in << ",glos(全局静态):" << glos << endl;
    i += 2;
    in += 3;
    glos += 5;
    cout << "i(自动变量):" << i << ",in(局部静态):" << in << ",glos(全局静态):" << glos << endl;
}

int main()
{
    static int ms = 10;
    for (int i = 0;i < 3;i++)
        f();
    cout << "ms=" << ms << endl;
    cout << "glos=" << glos << endl;    
    return 0;
}