#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney
{
public:
    // поля
    string name;
    double money;
    double rate;
    int time;
    // методы
    double getMoney()
    {
        double s = money;
        for(int k = 1; k <= time; k++)
        {
            s*=(1 + rate/100);
        }
        return s;
    }
    void showAll()
    {
        cout << "Имя: " << name << endl;
        cout << "Вклад: " << money << endl;
        cout << "Cтавка(%): " << rate <<"%"<<endl;
        cout << "Период: " <<  time << endl;
        cout << "Итоговая сумма: " << getMoney() << endl;
    }
};
int main()
{
    system("chcp 1251>nul");
    // создание объекта
    MyMoney obj;
    // присвоение значений полям
    obj.name = "Иванов Иван Иванович";
    obj.rate = 8;
    obj.time = 5;
    // вызов метода
    obj.showAll();
    system("pause>nul");
}