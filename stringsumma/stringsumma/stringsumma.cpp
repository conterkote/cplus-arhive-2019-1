#include <iostream>
#include <string>
#include <vector>
using namespace std;

int from_ASCII_char_to_int(const char symbol) {
    int result = static_cast<int>(symbol) - 48;
    return result;
}

int main()
{
    string example;
    int summa = 0;
    getline(cin, example);
    int N = example.length();
    int digit;
    for (int i = 0; i < N; i++)
    {
        digit = from_ASCII_char_to_int(example[i]);
        if (i < N - 1)
        {
            summa += digit;
            cout << digit << " + ";
        }
        else {
            summa += digit;
            cout << digit << " = " << summa;
        }
    }
}