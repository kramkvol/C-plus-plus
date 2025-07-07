#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    srand(2);
    int i, j;
    // размер массива указателей
    const int size = 5;
    // 
    const int cols[size] = {3, 7, 6, 4, 2};
    // динамический массив указателей
    // сюда записываются указатели массива cols
    int** nums = new int* [size];
    // создание динамического числового массива 
    // и заполение его значениями
    for(int i = 0; i < size; i++)
    {
        nums[i] = new int[cols[i]];
        cout << "*";
        // заполнение числового массива 
        for (j = 0; j < cols[i]; j++)
        {
            nums[i][j] = rand()%10;
            // отображение значения массива
            cout << nums[i][j] << "*";
        }
        cout << endl;
    }
    // удаление числовых динамических массивов
    for(i = 0; i < size; i++ )
    {
        delete [] nums[i];
    }
    // удаление динамического массива указателей 
    delete [] nums;

}