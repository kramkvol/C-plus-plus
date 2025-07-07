#include <iostream>

using namespace std;
int  pow (int a, int b)
{
    int temp = 1;
     for ( int i = 0; i != b; ++i)
     {
         temp*= a;
     }
     return temp;
}

int pow1 (int a, int b)
{
    if ( b == 0 )
        {
            return 1;
        }
    return a*pow (a,b-1);
}

int main()
{
    cout << pow(2,7) << endl;
    cout << pow1(2,7) << endl;
    return 0;
}