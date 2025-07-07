#include <iostream>

using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    int GetX()
    {
        return x;
    }
    void SetX(int valueX)
    {
        x = valueX;
    }
    void Print ()
    {
        cout << "X = " << x << endl;
    }
};

int main()
{
    Point a;
    a.SetX(7);
    a.Print();
    int result = a.GetX();
    cout << result << endl;
    return 0;

}
