#include <iostream>
#include <string>
using namespace std;

class Demo
{
    public:
        static int x;
        Demo(int i = 10)
        {
            x = i + x;
        }
        int getNum()
        {
            return x + 5;
        }
};

int Demo::x = 10;

int main()
{
    Demo demo(20);
    cout << "num = " << demo.getNum() << endl;
    return 0;
}