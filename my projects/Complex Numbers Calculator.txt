#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct Cnumber
{
	double real;
	double image;


	Cnumber(double Re, double Im)
	{
		real = Re;
		image = Im;
	}
	Cnumber()
	{
		real = 0;
		image = 0;
	}

	void print_Cnumbers()
	{
		cout << "Введите действительную часть комплексного числа: ";
		cin >> real;
		cout << "Введите мнимую часть комплексного числа: ";
		cin >> image;
		if (image > 0) cout << real << "+" << image << "i" << endl;
		if (image < 0) cout << real << "" << image << "i" << endl;

	}

	Cnumber operator + (const Cnumber & other) //перегрузка оператора «+»
	{
		Cnumber temp;
		temp.real = this->real + other.real;
		temp.image = this->image + other.image;
		return temp;
	}

	Cnumber operator - (const Cnumber & other) //перегрузка оператора «-»
	{
		Cnumber temp;
		temp.real = this->real - other.real;
		temp.image = this->image - other.image;
		return temp;
	}

	Cnumber operator * (const Cnumber & other) //перегрузка оператора «*»

	{
		Cnumber temp;
		temp.real  = this->real * other.real - this->image*other.image;
		temp.image = this->real * other.image + other.real * this->image;
		return temp;
	}
	Cnumber operator / (const Cnumber & other) //перегрузка оператора «/»
	{
		Cnumber temp;
		temp.real = (this->real * other.real + this->image * other.image) / (pow(other.real, 2) + pow(other.image, 2));
		temp.image = (other.real * this->image - this->real * other.image) / (pow(other.real, 2) + pow(other.image, 2));
		return temp;
	}
	void print()
	{
		if (image > 0) cout << this->real << "+" << this->image << "i";
		if (image < 0) cout << this->real << "" << this->image << "i";
	}
};

int main()
{
	system("chcp 1251>null");
    Cnumber a;
	Cnumber b;
	cout << "Первое комплексное число: "<< endl;
	a.print_Cnumbers();
	cout << "Второе комплексное число: " << endl;
	b.print_Cnumbers();
	cout << "Выберите номер операции: " << endl;
	cout << "1 Сложение двух комплексных чисел" << endl;
	cout << "2 Вычитание двух коплексных чисел" << endl;
	cout << "3 Умножение двух комплексных чисел" << endl;
	cout << "4 Деление двух комплексных чисел" << endl;
	int num;
	cin >> num;
     Cnumber sum = a + b;
	Cnumber sub = a - b;
	Cnumber mul = a * b;
	Cnumber div = a / b;
	switch (num) {

	case 1:
		cout << " a + b = "; sum.print(); cout << endl;
		break;

	case 2:
		cout << " a - b = "; sub.print(); cout << endl;
		break;

	case 3:
		cout << " a * b = "; mul.print(); cout << endl;
		break;

	case 4:
		cout << " a / b = "; div.print(); cout << endl;
		break;

	default:
		cout << "Нет такой операции" << endl;
	}
	return 0;}

