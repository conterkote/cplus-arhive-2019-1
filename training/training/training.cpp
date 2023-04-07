#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(0, "");
	int N, M;
	cout << "Введите нечетное число: " << endl; cin >> N;
	M = N;
	int tmpN = N - 1;
	int tmpJ = 0; // tmp переменные для контроля промежутка, на которых будут стоять 1 (tmpJ - начало, tmpN - конец)
	int** a = new int* [N];
	// Инициализация матрицы
	for (int rows = 0; rows < N; rows++)
		a[rows] = new int[M];
	// Задание значений элементов матрицы, итерируясь по строкам сверху вниз
	for (int rows = N - 1; rows >= 0 ; rows--) 
	{
		for (int cols = 0; cols < N; cols++)
		{
			a[rows][cols] = (tmpJ <= cols && cols <= tmpN) ? 1 : 0;
		}
		tmpN--;
		tmpJ++; // С каждым шагом промежуток для единиц сокращается с начала и с конца
	}
	// Вывод готовой матрицы
	for (int rows = 0; rows < N; rows++) {
		for (int cols = 0; cols < N; cols++) {
			cout << setw(3) << a[rows][cols];
		}
		cout << endl;
	}
	// Удаление дм
	for (int rows = 0; rows < N; rows++)
		delete[] a[rows];
	delete[] a;
	return 0;
}