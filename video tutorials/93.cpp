#include <iostream>
#include <string>
using namespace std;
class Apple
{
public:
    static int count;

    Apple (int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        count ++;
        id = count;
    }
    int GetId()
    {
        return id;
    }
    private:
        int weight;
        string color;
        int id;
};
int Apple:: count = 0;


int main ()
{
  Apple apple1(150, "red");
  Apple apple2(100, "green");
  Apple apple3(110, "yellow");
  cout << apple1.GetId() << endl;
  cout << apple2.GetId() << endl;
  cout << apple3.GetId() << endl;
}