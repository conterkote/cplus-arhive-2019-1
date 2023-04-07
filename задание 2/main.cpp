#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    setlocale(0, "");
    int deposit, time;
    cout << "Добро пожаловать в Сбербанк!" << endl;
    cout << "Введите сумму депозита: ";
    cin >> deposit;
    cout << "На сколько месяцев желаете сделать депозит?";
    cin >> time;
    deposit;
    for (int i = 0; i < time; i++){
        deposit *= 1.1;
        cout << deposit << endl;
    }
    cout << "В конце срока, вы получите: " << deposit << "Руб";
    return 0;
}
