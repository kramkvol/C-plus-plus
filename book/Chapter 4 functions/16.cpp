#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// ������� � ����� �����������
// ����������� ���������� ���� double

double f(double x, int n)
{
    double s=1;
    for(int k = 1; k < n; k++)
    {
        s*=(1+x);
    }
    return s;
}

double g(double x, int n)
{
    double s = 1;
    for(int k = 1; k < n; k++)
    {
        s*=x/k;
    }
    return s;
}
// ������� � ����� ����������
// ����������� ��������� ���� char
char h(int n)
{
    return 'A' + n;
}

char u(int n)
{
    return 'Z' - n;
}

int main()
{
    system("chcp 1251>nul");
    // ���������� ���  �������� ����������
    double x = 2;
    int n = 3;
    // �������� �� �������
    double (*p)(double, int);
    char (*q)(int);
    double (*r)(double);
    // ������������� ���������� �� �������
	// p ���� �������� ��������� � ������� f
    p = f;
    cout << "# " << p(x, n) << " # ";
    p = g;
    cout << p(x, n) << " # ";
    g = h;
    cout << q(n) << " # ";
    q = u;
    cout << q(n) << " # ";
    r = exp;
    cout << r(x/2) << " # ";
    r = log;
    cout << r(x) << " #\n";

    system("pause>nul");

    return 0;
}