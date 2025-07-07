#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ()
{
    system("chcp 1251>null");
    int n = 100;
    double x = 1;
    double s = 0, q = 1, k = 0;
    do {
        s+=q;
        k++;
        q*=x/k;
    }
    while(k<n);
    cout <<"вычесленное значение = " << s << endl;
    cout <<"контрольное значение = " << exp(x) << endl;
}
