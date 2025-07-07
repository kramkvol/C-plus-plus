#include <iostream>
#include <cstdlib>
using namespace std;
// указатель на значения типа double  
// size определяет размер массива 
// поскольку имя массива - указатель на первый элемент
double mean (double* m, int size)
{
    double sum = 0;
    // вычисление суммы
    for (int k = 0; k < size; k++)
    {
        // m - название массива
        sum += m[k];
    }

    return sum/size;
}
int main()
{
    system("chcp 1251>nul");
    double A [] {2, 5, -2, 7, 44};
    double B [] {5, 10, 16};
	// передаютсЯ имЯ массива и его размер
    cout << "Среднее по массиву A: " << mean(A, 5) << endl;
    cout << "Среднее по массиву B: " << mean(B, 3) << endl;

    system("pause>nul");

    return 0;

}