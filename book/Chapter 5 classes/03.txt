#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney
{
private:
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
  public:
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
    void setAll(double m, double r, int t)
    {
        money = m;
        rate = r;
        time = t;
    }

    void setAll(string n)
    {
        name = n;
    }

    void setAll(int t)
    {
        time = t;
    }

    void setAll(double m, double r)
    {
        money = m;
        rate = r;
    }

    void setAll(double x, bool s = true)
    {
        if(s){money = x;}
        else {rate = x;}
    }
};
int main()
{
    system("chcp 1251>nul");
    // создание объектов
    MyMoney obj;

    obj.setAll("Иванов Иван Иванович", 1000, 8, 5);
    obj.showAll();
    cout << endl;

    obj.setAll("Петр Петров Петрович", 1200, 7, 4);
    obj.showAll();
    cout << endl;

    obj.setAll(10);
    obj.showAll();
    cout << endl;

    obj.setAll(1200);
    obj.showAll();
    cout << endl;

    obj.setAll(1500, true);
    obj.showAll();
    cout << endl;

    obj.setAll(6, false);
    obj.showAll();
    cout << endl;

    obj.setAll(1000, 8, 5);
    obj.showAll();
    cout << endl;
    system("pause>nul");
}