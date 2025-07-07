#include <iostream>

using namespace std;
class IBicycle
{
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;
};

class SimpleBicycle: public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "metod TwistTheWheel() SimpleBicycle" << endl;
    }
    void Ride() override
    {
        cout << "metod Ride() SimpleBicycle" << endl;
    }
};

class SportBicycle : public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "metod TwistTheWheel() SportBicycle" << endl;
    }
    void Ride() override
    {
        cout << "metod Ride() SportBicycle" << endl;
    }
};
class Human
{
public:
    void RideOn(IBicycle & bicycle)
    {
        cout << "krutim rul' " << endl;
        bicycle.TwistTheWheel();
        cout << "poehali" << endl;
        bicycle.Ride();
    }
};
int main()
{
    SimpleBicycle sb;
    SportBicycle sportb;

    Human h;
    h.RideOn(sportb);
    return 0;
}