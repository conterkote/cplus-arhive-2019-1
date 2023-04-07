#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int startnumber, a, c, d, b, endnumber;
    cout << "Ââåäèòå ÷åòûğ¸õçíà÷íîå ÷èñëî:";
    cin >> startnumber;
    a = startnumber / 1000;
    b = (startnumber / 100) % 10 * 10;
    c = ((startnumber / 10) % 10) % 10 * 100;
    d = startnumber % 1000 % 100 % 10 * 1000;
    endnumber = d + c + b + a;
    cout << endnumber;
    return 0;
}
