#include <iostream>

using namespace std;
int gcd( int a, int b)
{
    int temp;
    if ( temp = a%b )
    {
        a = b;
        b = temp;
    }
    return b;
}
int gcd_r ( int a, int b )
{
    if ( a%b == 0 )
    {
        return b;
    }
    return a%b;
}
int main()
{
    cout << gcd(300,200) << endl;
    cout << gcd_r(300,200) << endl;
    return 0;
}

#include <iostream>


int gcd(int a, int b)
{
    int temp;
    while(temp = a % b)
    {
        a = b;
        b = temp;
    }
    return b;
}
int main()
{
    std::cout << gcd(24, 16);

}
