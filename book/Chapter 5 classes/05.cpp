#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney
{
public:
    // ����
    string name;
    double money;
    double rate;
    int time;

    // ����������� ��� ����������
    MyMoney()
    {
        name = "";
        money = 0;
        rate = 0;
        time = 0;
    }

    // ����������� � �������� �����������
    MyMoney(string n, double m, double r, int t)
    {
        setAll(n, m, r, t);
    }
    // ������ ������
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
        cout << "���: " << name << endl;
        cout << "�����: " << money << endl;
        cout << "C�����(%): " << rate <<"%"<<endl;
        cout << "������: " <<  time << endl;
        cout << "�������� �����: " << getMoney() << endl;
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
    // ���������� ����� ��������� ����������
    MyMoney operator++()
    {
        money = money + 1000;
        return *this;
    }
    // ����������� ����� ��������� ����������
        MyMoney operator++(int)
    {
        time++;
        return *this;
    }
    // ����������� ����� �������� ���� ��������
    MyMoney operator+ (MyMoney obj)
    {
        MyMoney tmp;
        tmp.name = "��������� ������";
        tmp.money = money + obj.money;
        tmp.rate = (rate > obj.rate)?rate:obj.rate;
        tmp.time = (time + obj.time)/2;
        return tmp;
    }

    };
    // ����������� ������� ��������� ��������
    double operator - (MyMoney objX, MyMoney objY)
    {
        return objX.getMoney() - objY.getMoney();
    }
    // ���������� ����� ��������� ����������
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
    // ����������� ����� ����������
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
    // �������� ��������
    MyMoney objA("��� ���������", 1200, 7, 1);
    objA.showAll();
    // ���������� �������� ���� time
    objA--;
    objA.showAll();
    // ���������� �������� ���� time
    objA++;
    objA.showAll();
    // ���������� �������� ���� time
    objA--;
    objA.showAll();
    // ���������� �������� ���� money
    objA--;
    objA.showAll();
    // ���������� �������� ���� money
    objA--;
    objA.showAll();
    // ���������� �������� ���� money
    objA++;
    objA.showAll();
    // �������� �������
    MyMoney objB("��� �����", 1100, 8, 5);
    objB.showAll();
    // �������� �������
    MyMoney objC = objA + objB;
    objC.showAll();
    cout << "������� � �������: " << objC - objB << endl;

    system("pause>nul");
}