#include<iostream>
using namespace std;
class Room
{
private:
    float area;

public:
    Room()
    {
        int length = 10;
        int breadth = 30;
        // int area;
        area = length*breadth;
        
    }   
    Room(float a, int b)
    {
        // float area;
        area = a * b;
        
    }
 
    // Room(float c, float b)
    // {
        
    //     area = c*b;

    // }
    void display()
    {
        cout << area;
    }
};
 
int main()
{
    Room R1;
    Room R2(12.5, 10);
    // Room R3(13.5, 13.5);

    R1.display();
    R2.display();
    // R3.display();

    return 0;
}
