#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251> nul" );
    // символьный массив
    char str[100] = "Пишу код на с++";
    // отображение каждого символа
    cout << str << endl;
    // поэлементное отображение каждого символа
    for (int k = 0; str[k]; k++){ cout << str[k] << "_";}
    cout << endl;
    // отображение начиная с определенной позиции
    for (char* p = str; *p; p++){ cout << p <<endl; }
    // замена символа в массиве
    str[13] = '/0';
    // отображение массива
    cout << str << endl;
    // отображение с определенного элемента
    cout << str[14]<< endl;
    int  n, j;
    cin >> n;
    cout << "раз два три" + n;
    cin >> j;

    const char* q = "раз два три" + j;
    cout << q[0] << endl;
    cout << q << endl;

    system("pause>nul");
}