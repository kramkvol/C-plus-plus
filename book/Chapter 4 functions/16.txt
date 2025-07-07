#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// функции с двумя аргументами
// возвращение результата типа double

double f(double x, int n)
{
    double s=1;
    for(int k = 1; k < n; k++)
    {
        s*=(1+x);
    }
    return s;
}

double g(double x, int n)
{
    double s = 1;
    for(int k = 1; k < n; k++)
    {
        s*=x/k;
    }
    return s;
}
// функции с одним аргументом
// возврацение результат типа char
char h(int n)
{
    return 'A' + n;
}

char u(int n)
{
    return 'Z' - n;
}

int main()
{
    system("chcp 1251>nul");
    // переменные для  передачи аргументам
    double x = 2;
    int n = 3;
    // указатеи на функции
    double (*p)(double, int);
    char (*q)(int);
    double (*r)(double);
    // использование указателей на функции
	// p стал способом обращения к функции f
    p = f;
    cout << "# " << p(x, n) << " # ";
    p = g;
    cout << p(x, n) << " # ";
    g = h;
    cout << q(n) << " # ";
    q = u;
    cout << q(n) << " # ";
    r = exp;
    cout << r(x/2) << " # ";
    r = log;
    cout << r(x) << " #\n";

    system("pause>nul");

    return 0;
}