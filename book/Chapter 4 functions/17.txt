#include <iostream>
#include <cstdlib>
using namespace std;

// передается указатель на функцию
double integrate(double (*F)(double), double a, double b)
{
    int n = 1000;
    double dx = (b-a)/n;
    double s = (F(a) + F(b))*dx/2;
    for(int k = 1; k < n-1; k++)
    {
        s+=F(a + dx*k)* dx;
    }
    return s;
}
// подынтегральная функция
double f(double x)
{
    return x*(1 - x);
}

double g(double x)
{
    return 1/x;
}
int main()
{

    system("pause>nul");
    // первый интеграл
    cout << integrate(f, 0, 1) << endl;
    // второй интеграл
    cout << integrate(g, 1, 2) << endl;
}
