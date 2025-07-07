#include <iostream>
#include <string>
using namespace std;

class MyWords {
public: 
	string word;
	bool state;
	// конструктор без аргументов
	MyWords()
	{
		word = "";
		state = true;
	}
	void read()
	{
		cout << word << " ";
		if (state)
		{
			//вызов метода для соседнего объекта
			(this + 1)->read();
		}
	}
};

int main()
{
	system("chcp 1251>nul");
	// р-р массива 
	const int n = 5;
	// создание массива 
	string numbers[n] = { "один", "два", "три", "четыре", "пять" };
	// массив объектов
	MyWords words[n];
		// значение для поля state последнего
		// объекта в массиве
		words[n - 1].state = false;
		// присваивание значения полю world для объектов в массиве 
		for(int k = 0; k<n; k++)
		{
			words[k].word = numbers[k];
		}
		// вызов метода
		words[0].read();
		cout << endl;
		words[2].read();
		cout << endl;

	system("pause>nul");
	return 0;
}

