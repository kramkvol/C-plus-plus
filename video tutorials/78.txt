#include <iostream>

using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point (int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    void SetX(int valueX)
    {
        x = valueX;
    }
    void Print ()
    {

        cout <<"x = "<< x << endl;
        cout <<"y = "<< y << endl;
    }
};

int main()
{
    Point a(5,44);
    a.Print();
    Point b (999,888);
    b.Print ();


}