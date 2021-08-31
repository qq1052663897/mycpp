#include <iostream>
#include <string>
using namespace std;

int main()
{
    int int1, int2;
    string str = "Hello C plus plus !";
    cout << "input something number please" << endl;
    cin >> int1;
    cout << "input something number else please" << endl;
    cin >> int2;
    cout << "calculating...\n"
        << int1 + int2 << endl;
    cout << str << endl;    
    return 0;
}