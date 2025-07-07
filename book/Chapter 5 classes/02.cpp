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
};
int main()
{
    system("chcp 1251>nul");
    // создание объектов
    MyMoney objA, objB;
    // присваивание значений полям
    objA.setAll("Иванов Иван Иванович", 1000, 8, 5);
    objB.setAll("Петр Петров Петрович", 1200, 7, 4);
    // отображение значений полей
    objA.showAll();
    cout << endl;
    objB.showAll();
    system("pause>nul");
}