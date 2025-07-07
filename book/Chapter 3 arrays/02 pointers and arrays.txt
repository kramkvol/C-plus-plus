#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 system("chcp 1251");
 // размер массива
 const int size = 12;
 int k;
 char symbs[size];
 // указатель на символьное значение
 char* p;
 char* q;
 // указатель на первый элемент массива 
 p = symbs;
 // значение первого  элемента массива
 p[0] = 'A';
 // указатель на поседний элемент массива
 q = &symbs[size-1];
 cout << "Между первым и последним элементами" << q-p << "позиций" << endl;
 // заполнение массива значениями
 while (p!=q)
 {
    p++;
    *p = p[-1]+1;
 }

cout << " элементы массива: " << endl;
for ( k = 0; k < size; k++ ){ cout << symbs[k] << "^";}
cout << " элементы массива в обратном порядке: " << endl;
for ( k = 0; k < size; k++) { cout << q[-k] << "^";}
cout << endl;
}
