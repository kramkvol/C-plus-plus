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
      //открытые члены в класса
      //конструктор без аргумента

      // Коструктор
      MyMoney(string n, double m, double r, int t)
      {
          setAll(n, m, r, t);
          cout << "Создан новый объект " <<endl;
          showAll();
      }
      // Деструктор
      ~MyMoney()
      {
          cout << "Объект для " << name << " удален" << endl;
          for (int k = 1; k <= 35; k++)
          {
              cout <<"*";
          }
          cout << endl;
      }
      // методы класса
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

};
    // функция
    void postman()
    {
        // создание локального объекта
        MyMoney objd("Почтальон Печкин", 200, 3, 2);
    }
int main()
{
    system("chcp 1251>nul");
    // создание объектов
    MyMoney objA("Кот Матроскин", 100, 5, 1);
    MyMoney objB("Дядя Федор", 1500, 8, 7);
    // вызов функции
    postman();
    // создание динамического объекта
    MyMoney* objC = new MyMoney("Пес Шарик", 1200, 6, 9);
    cout << "Все объекты созданы" << endl;
    delete objC;
    cout << "Выполнение программы завершено"<< endl;
    cout << endl;

    system("pause>nul");
}




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
      //открытые члены в класса
      //конструктор без аргумента
      MyMoney()
      {
          name = "Кот Матроскин";
          money = 100;
          rate = 5;
          time = 1;
          cout << "Создан новый объект"<< endl;
          showAll();
      }
      // Коструктор
      MyMoney(string n, double m, double r, int t)
      {
          setAll(n, m, r, t);
          cout << "Создан новый объект " <<endl;
          showAll();
      }
      // Деструктор
      ~MyMoney()
      {
          cout << "Объект для " << name << "удален" << endl;
          for (int k = 1; k <= 35; k++)
          {
              cout <<"*";
          }
          cout << endl;
      }
      // методы класса
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
    }
    void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }

};
    // функция
    void postman()
    {
        // создание локального объекта
        MyMoney objd("Почтальон Печкин", 200, 3, 2);
    }
int main()
{
    system("chcp 1251>nul");
    // создание объектов
    MyMoney objA;
    MyMoney objB("Дядя Федор", 1500, 8, 7);
    // вызов функции
    postman();
    // создание динамического объекта
    MyMoney* objC = new MyMoney("Пес Шарик", 1200, 6, 9);
    cout << "Все объекты созданы" << endl;
    delete objC;
    cout << "Выполнение программы завершено"<< endl;
    cout << endl;

    system("pause>nul");
}
