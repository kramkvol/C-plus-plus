#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251> nul" );
    // ���������� ������
    char str[100] = "���� ��� �� �++";
    // ����������� ������� �������
    cout << str << endl;
    // ������������ ����������� ������� �������
    for (int k = 0; str[k]; k++){ cout << str[k] << "_";}
    cout << endl;
    // ����������� ������� � ������������ �������
    for (char* p = str; *p; p++){ cout << p <<endl; }
    // ������ ������� � �������
    str[13] = '/0';
    // ����������� �������
    cout << str << endl;
    // ����������� � ������������� ��������
    cout << str[14]<< endl;
    int  n, j;
    cin >> n;
    cout << "��� ��� ���" + n;
    cin >> j;

    const char* q = "��� ��� ���" + j;
    cout << q[0] << endl;
    cout << q << endl;

    system("pause>nul");
}