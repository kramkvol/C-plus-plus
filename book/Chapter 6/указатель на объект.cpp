#include <iostream>
#include <string>
using namespace std;

class MyClass {
public: 
	string name;
	int number;

	void show()
	{
		cout << "поле name " << name << endl;
		cout << endl;
		cout << "поле number " << number << endl;
		cout << endl;
	}
};

int main()
{
	system("chcp 1251>nul");

	MyClass objA, objB;
	// объявление указателя на объект
	MyClass* p;
	// адрес объекта записывается в указатель
	p = &objA;
	// присвоение значений полям объекта 
	// через указатель 
	p->name = "ObjA";
	p->number = 100;
	// вызов метода через указатель
	p->show();
	// присвоение значений полям объекта 
	// через указатель
	p = &objB;
	// присвоение значений полям объекта 
	// через указатель 
	p->name = "ObjB";
	p->number = 222;
	// вызов метода через указатель
	p->show();
	cout << "Проверяем объекты: " << endl;
	cout << endl;
	objA.show();
	objB.show();
	system("pause>nul");
	return 0;
}

