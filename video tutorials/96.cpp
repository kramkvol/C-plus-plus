#include <iostream>
using namespace std;
class Pixel
{
    public:
        Pixel()
        {
            r  = g = b = 0;
        }

    Pixel(int r, int g, int b)
    {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    string GetInfo()
    {
        return
        "Pixel : r = " + to_string(r) +
                " g = " + to_string(g) +
                " b = " + to_string(b);
    }
    private:
        int r;
        int g;
        int b;

};
int main ()
{
    const int length = 5;
    //Pixel arr[length]
    Pixel *arr = new Pixel[length];
    arr[0] = Pixel(11 , 55, 44);
    cout<< arr[9].GetInfo()<< endl;
    delete[]arr;


}