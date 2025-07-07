#include <iostream>
using namespace std;
class Image
{
    public:

    void GetImageInfo()
        {
            pixels[0];
            for(int i = 0; i < length; i++)
            {
                cout << "#" << " " << pixels[i].GetInfo()<< endl;
            }
        }
   void GetLengthInfo()
    {
        for(int i = 0; i < length; i++)
        {
            cout << "#" << " " << pixels[i].GetInfo()<< endl;
        }
    }
    private:
    class Pixel
{
public:
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
        static const int length = 5;
        Pixel pixels[length]
    {
        Pixel (1, 2,3),
        Pixel (4, 5, 6),
        Pixel (7, 8, 9),
        Pixel (10, 11, 12),
        Pixel (13 ,14 ,15)
    };
};
int main ()
{
    Image img;
    img.GetLengthInfo();

}