#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 system("chcp 1251");
 // ������ �������
 const int size = 12;
 int k;
 char symbs[size];
 // ��������� �� ���������� ��������
 char* p;
 char* q;
 // ��������� �� ������ ������� ������� 
 p = symbs;
 // �������� �������  �������� �������
 p[0] = 'A';
 // ��������� �� �������� ������� �������
 q = &symbs[size-1];
 cout << "����� ������ � ��������� ����������" << q-p << "�������" << endl;
 // ���������� ������� ����������
 while (p!=q)
 {
    p++;
    *p = p[-1]+1;
 }

cout << " �������� �������: " << endl;
for ( k = 0; k < size; k++ ){ cout << symbs[k] << "^";}
cout << " �������� ������� � �������� �������: " << endl;
for ( k = 0; k < size; k++) { cout << q[-k] << "^";}
cout << endl;
}
