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

    // конструктор без аргументов
    MyMoney()
    {
        name = "";
        money = 0;
        rate = 0;
        time = 0;
    }

    // конструктор с четыремя аргументами
    MyMoney(string n, double m, double r, int t)
    {
        setAll(n, m, r, t);
    }
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
        for(int k = 1; k < 35; k++)
        {
            cout << "-";
        }
        cout << endl;
    }
    void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }
    // Префиксная форма оператора инкремента
    MyMoney operator++()
    {
        money = money + 1000;
        return *this;
    }
    // Постфиксная форма оператора инкремента
        MyMoney operator++(int)
    {
        time++;
        return *this;
    }
    // операторный метод сложения двух объектов
    MyMoney operator+ (MyMoney obj)
    {
        MyMoney tmp;
        tmp.name = "Почтальон Печкин";
        tmp.money = money + obj.money;
        tmp.rate = (rate > obj.rate)?rate:obj.rate;
        tmp.time = (time + obj.time)/2;
        return tmp;
    }

    };
    // операторная функция вычитания объектов
    double operator - (MyMoney objX, MyMoney objY)
    {
        return objX.getMoney() - objY.getMoney();
    }
    // префиксная форма оператора декремента
    MyMoney operator -- (MyMoney &obj)
    {
        if(obj.money > 1000)
        {
            obj.money -= 1000;
        }
        else
        {
            obj.money = 0;
        }
        return obj;
    }
    // Постфиксная форма декремента
    MyMoney operator -- (MyMoney &obj, int)
    {
        if(obj.time > 0)
        {
            obj.time--;
        }
        else
        {
            obj.time = 0;
        }
        return obj;
    }

int main()
{
    system("chcp 1251>nul");
    // создание объектов
    MyMoney objA("Кот Матроскин", 1200, 7, 1);
    objA.showAll();
    // уменьшение значения поля time
    objA--;
    objA.showAll();
    // уменьшение значения поля time
    objA++;
    objA.showAll();
    // увеличение значения поля time
    objA--;
    objA.showAll();
    // уменьшение значения поля money
    objA--;
    objA.showAll();
    // уменьшение значения поля money
    objA--;
    objA.showAll();
    // увеличение значения поля money
    objA++;
    objA.showAll();
    // создание объекта
    MyMoney objB("Пес Шарик", 1100, 8, 5);
    objB.showAll();
    // создание объекта
    MyMoney objC = objA + objB;
    objC.showAll();
    cout << "Разница в доходах: " << objC - objB << endl;

    system("pause>nul");
}