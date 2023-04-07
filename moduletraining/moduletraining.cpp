#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int COLS = 6;
	const int ROWS = 3;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";;
		}
		cout << "\n";
	}
}