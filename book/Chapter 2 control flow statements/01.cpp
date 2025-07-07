#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    system("chcp 1251>nul");
    int n, s = 0, k;
    cout <<"¬ведите предел: ";
    cin >> n;
    for (int k = 1; k < n; k++)
    {
        s+=k*k;
    }
        cout << "Cумма квадратов чисел от 1 до N = "<<n<<": " <<s<<endl;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    system("chcp 1251>nul");
    int n, s, k;
    cout <<"¬ведите предел: ";
    cin >> n;
    for (int k = 1, s = 0; k < n;s+=k*k, k++)
    cout << "Cумма квадратов чисел от 1 до N = "<<n<<": " <<s<<endl;
}