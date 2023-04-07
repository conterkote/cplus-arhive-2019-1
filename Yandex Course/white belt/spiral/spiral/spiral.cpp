#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N = 5, number = 1, m = 0, rows = 0, cols = -1;
    int** a = new int*[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = new int[N];
	}
	for (; cols < N; cols++)
	{
		a[rows][cols] = number;
		number++;
	}
	for (; rows < N; ++rows)
	{
		a[rows][cols] = number;
		number++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}