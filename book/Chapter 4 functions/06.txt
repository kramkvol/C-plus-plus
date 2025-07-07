#include <iostream>
#include <cstdlib>
using namespace std;

void swap(char &a, char &b)
{
    cout << "вызываетс¤ функци¤ swap" << endl;
    // изменени¤ значений аргументов функции
    cout << "первый аргумент: " << a << endl;
    cout << "второй аргумент: " << b << endl;
    char t=b;
    b=a;
    a=t;
    for(int i = 1; i < 20; i++)
    {
        cout << "-";
    }
    cout << endl;
    // проверка значений аргументов функции
    cout << "первый аргумент: " << a << endl;
    cout << "второй аргумент: " << b << endl;
    cout << "функци¤ swap завершена" << endl;
}
int main()
{
    system("chcp 1251>nul");
    char x = 'A', y = 'B';
    // провер¤ютс¤ значени¤ переменных
    cout << "перва¤ переменна¤: " << x << endl;
    cout << "втора¤ переменна¤: " << y << endl;
    swap(x,y);
    // провер¤ютс¤ значени¤ переменных
    cout << "перва¤ переменна¤: " << x << endl;
    cout << "втора¤ переменна¤: " << y << endl;
    system("pause>nul");

    return 0;

}