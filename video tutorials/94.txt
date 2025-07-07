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
    int GetCount ()
    {
        return count;
    }
    int GetId()
    {
        return id;
    }
      static void ChangeColor(Apple & apple, string color)
                     {
                        apple.color = color;
                     }
      void ChangeNoStatic(string color)
      {
          this->color = color;
      }
    private:
        int weight;
        string color;
        int id;

};
int Apple:: count = 0;


int main ()
{
  Apple apple(150, "red");
  apple. ChangeColor(apple,"green");
}
