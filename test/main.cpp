#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    setlocale(0, "");
    int a=9;
    while(a<20)
    {
        cout << "переменная a=" << a << endl;
        a++;
    }
    do
    {
        cout << "переменная a=" << a << endl;
        a++;
    } while(a<=20);
    return 0;
}
