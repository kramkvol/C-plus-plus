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
        cout << "������� �������������� ����� ������������ �����: " << endl;
        cin >> real;
        cout << "������� ������ ����� ������������ ����� = " << real << endl;
        cin >> image;
        cout << "������ ����� = " << image << endl;
        if (image > 0) cout << "����������� ����� � �������������� �����: " << real << "+" << image << "i";
        if (image < 0) cout << "����������� ����� � �������������� �����: " << real << "" << image << "i";
	}
	void Modul ()
	{
	    double modul = abs(sqrt(pow(real, 2) + pow(image, 2)));
	    cout << "������ = " << modul << endl;
	}
	void AR ()
	{
	   double argument = atan(image/real);
       cout << "�������� = " << argument << endl;
	}
    void PK ()
	{
	    double argument = atan(image/real);
	    double modul = abs(sqrt(pow(real, 2) + pow(image, 2)));
        cout << "������������� ����� ������������ �����: " << ceil(modul) << "e" <<"^" << "i" << ceil(argument) <<endl;
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