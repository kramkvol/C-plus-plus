#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney
{
public:
    // поля базового класса
    string name;
    double money;
    double rate;
    int time;

    // методы класса
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
    void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }
    // конструктор базового класса(четыре вргумента)
    MyMoney(string n, double m, double r, int t)
    {
        setAll(n, m, r, t);
    }
    // конструктор базового класса (без аргументов)
    MyMoney()
    {
        setAll("", 0, 0, 0);
    }
};
class BigMoney: MyMoney
{
public:
    int periods;
    // переопределение методов
        double getMoney()
    {
        double s = money;
        for(int k = 1; k <= time*periods; k++)
        {
            s*=(1 + rate/100/periods);
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
    void setAll(string n, double m, double r, int t, int p)
    {
        MyMoney::setAll(n, m, r, t);
        periods = p;
    }
    // конструктор производного класса (пять аргументов)
    BigMoney(string n, double m, double r, int t, int p = 1)
    {
        MyMoney(n, m, r, t);
        periods = p;
    }
    // конструктор производного класса (без аргументов)
    BigMoney(): MyMoney()
    {
        periods = 1;
    }

};
int main()
{
    system("chcp 1251>nul");
    MyMoney objA("Кот матроскин", 1200, 8, 5);

    BigMoney objB("Дядя Федор", 1000, 7, 6, 2);
    BigMoney objC("Пес Шарик", 1500, 6, 8,);
    BigMoney objD;
    objD.setAll("Почтальон печкин", 800, 10, 3, 4);
    //проверка характеристик объектов
    objA.showAll();
    cout << endl;
    objB.showAll();
    cout << endl;
    objC.showAll();
    cout << endl;
    objD.showAll();


    system("pause>nul");
}