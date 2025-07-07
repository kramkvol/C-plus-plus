#include <iostream>
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
    }
    private:
        int weight;
        string color;
};
int Apple:: count = 0;


int main ()
{
  cout << '*************' << endl;
  Apple apple1(150, "red");
  Apple apple2(100, "green");
  Apple apple3(110, "yellow");
  cout << apple1.count << endl;
  cout << apple2.count << endl;
  cout << apple3.count << endl;
  cout << '*************' << endl;
  cout << Apple::count << endl;
}