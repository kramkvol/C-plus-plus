#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class MyMoney
{
private:
    // ����
    string name;
    double money;
    double rate;
    int time;
    // ������
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
        cout << "���: " << name << endl;
        cout << "�����: " << money << endl;
        cout << "C�����(%): " << rate <<"%"<<endl;
        cout << "������: " <<  time << endl;
        cout << "�������� �����: " << getMoney() << endl;
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
    // �������� ��������
    MyMoney objA, objB;
    // ������������ �������� �����
    objA.setAll("������ ���� ��������", 1000, 8, 5);
    objB.setAll("���� ������ ��������", 1200, 7, 4);
    // ����������� �������� �����
    objA.showAll();
    cout << endl;
    objB.showAll();
    system("pause>nul");
}