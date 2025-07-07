1)
#include <iostream>
#include <math.h>

using namespace std;
class rectandle
{
private:
    int a;
    int b;
public:
   rectandle (int lengthA, int lengthB)
    {
        a = lengthA;
        b = lengthB;
    }
   void Square ()
    {
        cout <<"Square = "<< a*b << endl;
    }
   void perimetr ()
    {
        cout <<"perimetr = "<< (a*b)*2 << endl;
    }
    void diagonal ()
    {
        cout <<"diagonal = "<< sqrt ( pow(a,2) + pow(b,2) )<< endl;
    }
};

int main()
{
       rectandle a(3,4);
       a.Square();
       a.perimetr();
       a.diagonal ();
}

2)
#include <iostream>
#include <math.h>

using namespace std;
class rectandle
{
private:
    int a;
    int b;
public:
   rectandle (int lengthA, int lengthB)
    {
        a = lengthA;
        b = lengthB;
    }
    Square ()
    {
        return a*b;
    }
    perimetr ()
    {
        return (a*b)*2;
    }
     diagonal ()
    {
        return sqrt ( pow(a,2) + pow(b,2) );
    }
};

int main()
{
     rectandle a(3,5);
     cout << a.Square()<< endl;
     cout << a.perimetr()<< endl;
     cout << a.diagonal()<< endl;
}
