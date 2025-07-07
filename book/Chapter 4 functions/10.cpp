#include <iostream>
#include <cstdlib>
using namespace std;
// заполнение
void show(int** M, int p, int n)
{
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}




int main()
{
    system("chcp 1251>nul");
    // размеры динамического массива
    int a = 3, b = 3;
    // создание массива указателей
    int** A = new int*[a];
    // создание и заполнение внутренних массивов
     // отображение массива
    for(int i = 0; i < a; i++)
    {
        A[i] = new int[a];
        for(int j = 0; j < b; j++)
        {
            A[i][j] = i*a + j + 1;
        }
    }
    cout << "Содержимое массива: " << endl;
    show(A, a, b);

    for (int i=0; i < a; i++)
    {
        // удаление внутренних массивов
        delete [] A[i];
    }
    // удаление массива указателей
    delete [] A;


    system("pause>nul");

    return 0;
}