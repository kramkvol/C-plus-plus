#include <iostream>
#include <string>
using namespace std;

class MyClass {
public: 
	string name;
	int number;

	void show()
	{
		cout << "���� name " << name << endl;
		cout << endl;
		cout << "���� number " << number << endl;
		cout << endl;
	}
};

int main()
{
	system("chcp 1251>nul");

	MyClass objA, objB;
	// ���������� ��������� �� ������
	MyClass* p;
	// ����� ������� ������������ � ���������
	p = &objA;
	// ���������� �������� ����� ������� 
	// ����� ��������� 
	p->name = "ObjA";
	p->number = 100;
	// ����� ������ ����� ���������
	p->show();
	// ���������� �������� ����� ������� 
	// ����� ���������
	p = &objB;
	// ���������� �������� ����� ������� 
	// ����� ��������� 
	p->name = "ObjB";
	p->number = 222;
	// ����� ������ ����� ���������
	p->show();
	cout << "��������� �������: " << endl;
	cout << endl;
	objA.show();
	objB.show();
	system("pause>nul");
	return 0;
}

