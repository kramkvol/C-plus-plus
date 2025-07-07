#include <iostream>
#include <cstdlib>
using namespace std;

// функция результатом возвращает
// указатель на элемент массива
int* getMax(int* nums, int n)
{
    int i, k;
    // определение индекса наибольшего элемента
    for( k = 0; k < n; k++)
    {
        if(nums[k] > nums[i])
        {
             i = k;
        }
    }
    return nums + i;
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
    int numbers[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    show(numbers, size);

    // запись результата функции в указатель
    int* maxPnt = getMax(numbers, size);
    cout << "Максимальное значение: " << *maxPnt << endl;
    // присваивание значения элементу
    *maxPnt = -100;
    show(numbers, size);

    // значение присваивается переменной
    int  maxNum = *getMax(numbers, size);
    cout << "Максимальное значение: " << maxNum << endl;
    // присваивание значения элементу
    maxNum = -200;
    show(numbers, size);

    cout << "Максимальное значение: ";
    cout << *getMax(numbers, size);
    cout << "Индекс элемента: ";
    cout << getMax(numbers, size)-numbers << endl;

    system("pause>nul");

    return 0;
}