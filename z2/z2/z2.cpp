#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	setlocale(0, "");
	// variables initialisation
	string string_to_check;
	int digitals_counter = 0;
	// body of program
	cout << "Введите строку и программа выдаст вам сколько процентов строки составляют цифры: ";  cin >> string_to_check;
	for (const auto symbol : string_to_check)
	{
		if (isdigit(symbol)) digitals_counter++;
	}
	// result
	cout << digitals_counter / static_cast<double>(string_to_check.length()) * 100 << "% чисел в строке";
}