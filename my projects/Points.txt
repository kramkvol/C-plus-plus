#include <iostream>
using namespace std;
class Point
{
    public:

        double x;
        double y;

    Point (int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }
        Point ()
    {
        x = 0;
        y = 0;
    }
        bool operator ==(const Point & other)
        {
            return this->x == other.x && this->y == other.y;
        }
        bool operator !=(const Point & other)
        {
            return !(this->x == other.x && this->y == other.y);
        }

        Point operator + (const Point & other)
        {
            Point temp;

          temp.x = this->x + other.x;
          temp.y = this->y + other.y;
          return temp;
        }

           Point operator - (const Point & other)
        {
            Point temp;
            temp.x = this->x - other.x;
            temp.y   = this->y - other.y;
            return temp;
        }
           Point operator * (const Point & other)
        {
            Point temp;
            temp.x = this->x * other.x;
            temp.y = this->y * other.y;
            return temp;
        }
           Point operator / (const Point & other)
        {
            Point temp;
            temp.x = this->x / other.x;
            temp.y = this->y / other.y;
            return temp;
        }

        void print ()
        {
            cout << "(" << this->x <<";"<< this->y << ")";
        }

};

int main()
{
    Point a(4.0, 5.0);
    Point b(4.0, 9.0);

    bool ravno = a == b;
    bool ne_ravno = a != b;
    Point plus1 = a + b;
    Point minus1 = a - b;
    Point mull1 = a * b;
    Point div1 = a / b;


    cout << " a " ; a.print(); cout << endl;
    cout << " b " ; b.print(); cout << endl;
    cout << " a == b : "<< ravno <<endl;
    cout << " a != b : "<< ne_ravno <<endl;
    cout << " a + b = "; plus1.print(); cout << endl;
    cout << " a - b = "; minus1.print(); cout << endl;
    cout << " a * b = "; mull1.print(); cout << endl;
    cout << " a / b = "; div1.print(); cout << endl;
}