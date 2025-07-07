#include iostream
#include cstdlib
using namespace std;

int main ()
{
    system(chcp 1251null);
    cout  Решите уравнение Ax = Bn  endl;
    double A, B;
    cout введите A =  endl;
    cin  A;
    cout введите B =  endl;
    cin  B;
    try{
        if(A != 0){throw A;}
        if(B != 0){throw решений нет;}
        cout  Решение - любое число  endl;;
        }

    catch(double e){cout  Решение уравнения  Be endl;}
    catch(char e) {cout  e  endl;}
}