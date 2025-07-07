#include <iostream>
#include <cstdlib>
using namespace std;

// функция результатом возвращает
// указатель на элемент массива
int* getMax(int* nums, int n)
{
    int i = 0, k;
    // определение индекса наибольшего элемента
    for( k = 0; k < n; k++)
    {
        if(nums[k] > nums[i])
        {
             i = k;
        }
    }
    return &nums[i];
}

// отображение содержимого массива
void show(int* nums, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    system("chcp 1251>nul");
    const int size = 10;
    // создание массива
    int numbers[size] = {1, 5, 8, 2, 4, 9, 11, 9, 12, 3};
    show(numbers, size);
    // запись результата функции в переменную
    int maxNum = getMax(numbers, size);
    cout << "Максимальное значение: " << maxNum << endl;
    // присваивание значения элементу
    maxNum = -100;
    show(numbers, size);

    // значение записывается в ссылку
    int  &maxRef = *getMax(numbers, size);
    cout << "Максимальное значение: " << maxRef << endl;
    maxRef = -200;
    show(numbers, size);

    cout << "Максимальное значение: ";
    cout << getMax(numbers, size);

    system("pause>nul");

    return 0;
}