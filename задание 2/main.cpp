#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    setlocale(0, "");
    int deposit, time;
    cout << "����� ���������� � ��������!" << endl;
    cout << "������� ����� ��������: ";
    cin >> deposit;
    cout << "�� ������� ������� ������� ������� �������?";
    cin >> time;
    deposit;
    for (int i = 0; i < time; i++){
        deposit *= 1.1;
        cout << deposit << endl;
    }
    cout << "� ����� �����, �� ��������: " << deposit << "���";
    return 0;
}
