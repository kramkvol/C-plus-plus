#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class MyClass {
public: 
	// ���� ������
	char code;
	// ���� - ��������� �� ������ 
	MyClass* next;

	~MyClass()
	{
		cout << "������ � ����� " << code << " ������ " << endl;
	}
	// ����� ����������� ����������� ���� 
	void show()
	{
		cout << code << " ";
		if (next)
		{
			next->show();
		}
	}
};

// ������� ��� �������� ������� �������� 
void deleteAll(MyClass* q)
{
	if (q->next)
	{
		deleteAll(q->next);
	}
	delete q;
}
int main()
{
	system("chcp 1251>nul");
	int n = 10;
	// ������������ �������� ������� 
	MyClass* pnt = new MyClass;
	// ������ � ���� ������� ����� ��������� �� ����
	pnt->code = 'A';
	// ��������� �� ������
	MyClass* p;
	// ��������� �������� ���������
	p = pnt;
	// �������� ������� ������� 
	for (int k = 1; k <= n; k++)
	{
		// �������� ������������� ������� 
		// ������ ��� ������ � ���������� �������� 
		p->next = new MyClass;
		// �������� ���� code ��� ������ �������
		p->next->code = p->code + 1;
		// �������� ������ ��������� - �����
		// ����� ���������� �������
		p = p->next;
	}
	// ������� ������ � ���� next
	// ������� � �������
	p->next = 0;
	// ����� ������� ��� ������� ������� � �������
	pnt->show();
	cout << endl;
	// �������� ������� ������� 
	deleteAll(pnt);
	system("pause>nul");
	return 0;
}

