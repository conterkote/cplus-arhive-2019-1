#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string primer;
    int summa=0;
    int number;
    getline(cin, primer);
    for (int i=0;i<primer.length();i++)
    {
        if (i < primer.length()-1)
        {
            summa += primer[i]-48;
            cout <<primer[i]-48 <<"+";
        }
        else {
            summa+=primer[i]-48;
            cout<<primer[i]-48<<"="<<summa;
        }
    }
}