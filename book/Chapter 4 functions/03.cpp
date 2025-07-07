#include <iostream>
#include <cstdlib>
using namespace std;

double getMoney(double m, double r, int y = 1, int n = 1)
{
    double s = m;
    double z = n*y;
    double q = r/n;
    for(int k = 1; k <= z; k++)
    {
        s*= (1 + q/100);
    }
    return s;
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
