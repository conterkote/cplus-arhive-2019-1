#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int N;
    cout << "Введите N (1 < N <= 5): " << endl; cin >> N;
    // Инициализация и отображение матрицы
    int** a = new int* [N];
    for (int rows = 0; rows < N; rows++)
    {
        a[rows] = new int[N];
        for (int cols = 0; cols < N; cols++)
        {
            a[rows][cols] = 0 + rand() % (10 - 0 + 1); // Задаем промежуток для генерации случайных чисел с помощью формулы begin + rand() % (begin + end + 1)
            cout << setw(3) << a[rows][cols];
        }
        cout << endl;
    }

    cout << endl << endl << endl; // для удобства чтения

    int min = INT_MAX; // первая строка
    int min_row = 404;
    int row_sum = 0; // сумма элементов строки

    // Итерируемся по строкам матрицы, для нахождения наименьшей суммы
    for (int rows = 0; rows < N; rows++)
    {
        for (int cols = 0; cols < N; cols++)
        {
            row_sum += a[rows][cols];
            cout << setw(3) << a[rows][cols];
        }
        if (row_sum < min)
        {
            min_row = rows;
            min = row_sum;
        }
        cout << "\t\tСумма элементов строки = " << row_sum << endl;
        row_sum = 0; // сумма зануляется в конце каждой строки
    }
    cout << endl << endl << endl; // для удобства чтения
    cout << "Наименьшая сумма элементов столбцов матрицы = " << min << endl;
    cout << "Индекс строки с наименьшей суммой: " << min_row << endl; // при ошибке выведет 404

    // Удаление дм
    for (int rows = 0; rows < N; rows++)
        delete[] a[rows];
    delete[] a;
    return 0;
}