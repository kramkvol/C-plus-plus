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


		void AG()
	{
        cout << "Введите действительную часть комплексного числа: " << endl;
        cin >> real;
        cout << "Введите мнимую часть комплексного числа = " << real << endl;
        cin >> image;
        cout << "Мнимая часть = " << image << endl;
        if (image > 0) cout << "Комплескное число в алгебраической форме: " << real << "+" << image << "i";
        if (image < 0) cout << "Комплескное число в алгебраической форме: " << real << "" << image << "i";
	}
	void Modul ()
	{
	    double modul = abs(sqrt(pow(real, 2) + pow(image, 2)));
	    cout << "Модуль = " << modul << endl;
	}
	void AR ()
	{
	   double argument = atan(image/real);
       cout << "Аргумент = " << argument << endl;
	}
    void PK ()
	{
	    double argument = atan(image/real);
	    double modul = abs(sqrt(pow(real, 2) + pow(image, 2)));
        cout << "Показательная форма комплексного числа: " << ceil(modul) << "e" <<"^" << "i" << ceil(argument) <<endl;
	}
};

int main()
{
    system("chcp 1251>null");
    Cnumber a;
    a.AG(); cout << endl;
    a.Modul(); cout << endl;
    a.AR(); cout << endl;
    a.PK(); cout << endl;
}