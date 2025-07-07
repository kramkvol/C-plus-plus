#include <iostream>
#include <cstdlib>
using namespace std;

double getMoney(double m, double r)
{
    return m*(1+r/100);
}

double getMoney(double m, double r, int y)
{
    double s=m;
    for(int k = 1; k <= y; k++)
    {
        s*= (1+r/100);
    }
    return s;
}

double getMoney(double m, double r, int y, int n)
{
    return getMoney(m, r/n, y*n);
}

int main()
{
    system("chcp 1251>nul");
    double money = 1000;
    double rate =5;
    cout << "Начальная сумма: " << money << endl;
    cout << "Годовая ставка: " << rate << endl;
    cout << "Вклад на 1 год: " << getMoney(money, rate) << endl;
    cout << "Вклад на 7 лет \n(начисления 3 раза в год): " ;
    cout << getMoney(money, rate, 7, 3);

}
