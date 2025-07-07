#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 system("chcp 1251");
 // указатель на целое число
 int* size;
 // динамическое выделение памяти под переменную
 size = new int;
 cout << "Введите размер массива: ";
 cin >> *size;
 // указатель на символьное значение
 char* symbs;
 symbs = new char[*size];
 // заполнение массива 
 for(int k = 0; k < *size; k++)
 {
     symbs[k] = 'a' + k;
     cout << symbs[k] << " ";
 }
     // удаление массива
     delete [] symbs;
     // удаление переменной
     delete size;
     cout << "массив и переменная удалены" << endl;
     system("pause>nul");
}