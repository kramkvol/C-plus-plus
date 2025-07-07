#include <iostream>

using namespace std;
class CoffeGrindor
{
private:
  bool CheckVoltage()
  {
      return false;
  }
public:
    void Start()
    {
        bool voltageIsNormal = CheckVoltage();
        if (voltageIsNormal)
        {
            cout << "vjhhh" << endl;
        }
        else
        {
            cout << "beeep" << endl;
        }
    }

};

int main()
{
    CoffeGrindor a;
    a.Start();
    return 0;
}
