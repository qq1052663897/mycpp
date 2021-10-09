#include <iostream>
#include <string>
using namespace std;

class Samp
{
    public:
        void setIJ(int num1, int num2)
        {
            i = num1;
            j = num2;
            cout << "i = " << i << "构造函数" << endl;
        }
        void printDemo();
        ~Samp()
        {
            cout << "i = " << i << "析构函数" << endl;
        }
        int getMut()
        {
            return i*j;
        }

    protected:
        int i;
        int j;
};
void Samp::printDemo()
{
    cout << "i = " << i << ", j = " << j << endl;
}

int main()
{
    Samp *p;
    p = new Samp[5];
    if (!p) {
        cout << "内存分配错误" << endl;
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        p[i].setIJ(i, i);
    }
    for (int j = 0; j < 5; j++) {
        p[j].printDemo();
        cout << "Mut[" << j << "]值是" << p[j].getMut() << endl;
    }
    delete[] p;
    cout << "sizeof p :" << sizeof(p) << endl;

    return 0;
}