#include <iostream>
#include <cstdlib>
using namespace std;

// ���������� ������� ���������� ��������� �� ���������� �������� 
void swap(char *a, char *b)
{
    cout << "���������� ������� swap" << endl;
    // �������� �������� ���������� �������
    cout << "������ ��������: " << *a << endl;
    cout << "������ ��������: " << *b << endl;
	// ��������� t ������������� ��������
	// ������� �������� � ������ ��������� b(������ �������� �������)
    char t=*b;
	// �� ������ �� ��������� B ������������ ��������
	// ����������� �� ������ �� ��������� A (������ �������� �������)
    *b=*a;
	// �� ������ ������������� � ��������� �
	// ������������ � ���������� t
    *a=t;
    for(int i = 1; i < 20; i++)
    {
        cout << "-";
    }
    cout << endl;
    // �������� �������� ���������� �������
    cout << "������ ��������: " << *a << endl;
    cout << "������ ��������: " << *b << endl;
    cout << "������ swap ���������" << endl;
}
int main()
{
    system("chcp 1251>nul");
    char x = 'A', y = 'B';
    // ��������� ������� ����������
    cout << "����� ���������: " << x << endl;
    cout << "����� ���������: " << y << endl;
	// ������ ���������� - ��� ��������� �� �������� ���� Char
    swap(&x,&y);
    // ��������� ������� ����������
    cout << "����� ����������: " << x << endl;
    cout << "����� ����������: " << y << endl;
    system("pause>nul");

    return 0;

}
