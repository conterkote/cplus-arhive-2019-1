#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	setlocale(0, "");
	map<string, vector<string>> m1{ {"abc", {"a", "b", "c", "d"}}, {"абв", {"а", "б", "в", "г"}} };
	for (const auto& item : m1)
	{
		cout << item.first << " - ";
		for (const auto& value : item.second)
		{
			cout << value << ", ";
		}
		cout << endl;
	}
}