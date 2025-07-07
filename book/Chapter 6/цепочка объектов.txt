#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class MyClass {
public: 
	// поле класса
	char code;
	// поле - указатель на объект 
	MyClass* next;

	~MyClass()
	{
		cout << "Объект с полем " << code << " удален " << endl;
	}
	// метод отображения символьного поля 
	void show()
	{
		cout << code << " ";
		if (next)
		{
			next->show();
		}
	}
};

// функция для удаления цепочки объектов 
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
	// динамическое создание объекта 
	MyClass* pnt = new MyClass;
	// доступ к полю объекта через указатель на него
	pnt->code = 'A';
	// указатель на объект
	MyClass* p;
	// начальное значение указателя
	p = pnt;
	// создание цепочки объекта 
	for (int k = 1; k <= n; k++)
	{
		// создание динамического объекта 
		// запись его адреса в следующего элемента 
		p->next = new MyClass;
		// значение поля code для нового объекта
		p->next->code = p->code + 1;
		// значение нового указателя - адрес
		// вновь созданного объекта
		p = p->next;
	}
	// нулевая ссылка в поле next
	// объекта в цепочке
	p->next = 0;
	// вызов методпа для первого объекта в цепочке
	pnt->show();
	cout << endl;
	// удаление цепочки объекта 
	deleteAll(pnt);
	system("pause>nul");
	return 0;
}

