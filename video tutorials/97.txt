#include <iostream>

using namespace std;
class Cap{
    public:
        string GetColor()
        {
            return color;
        }
    private:
        string color = "red";

};
class Model{
public:
    void inspectmodel()
    {
       cout << " kepka " << cap.GetColor() <<" cveta "<< endl;
    }
private:
    Cap cap;
};
class Human{
    public:
            void inspecthuman()
        {
             cout << " kepka " <<cap.GetColor()<<" cveta "<< endl;
        }
        void Think()
        {
              brain.Think();
        }
    private:
         class Brain{
            public:
                void Think()
                {
                    cout << " i am alive! " << endl;
                }

         };
            Brain brain;
            Cap cap;
};

int main()
{
   Human human;
   human.Think();
   human.inspecthuman();

   Model model;
   model.inspectmodel();
}
