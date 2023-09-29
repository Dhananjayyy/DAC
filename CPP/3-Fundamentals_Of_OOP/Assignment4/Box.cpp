// Dhananjay Yelwande
// PRN: 230943020025

/* Assignment 4
Create class called Box, add data members height, width and depth.
Also write member functions to display values and functions to calculate the volume of box
*/

#include <iostream>
using namespace std;

class Box
{
    int height, width, depth;
    public:
    void setBox(int, int, int);
    int getVolume();
};

int main()
{
    Box b1;
    b1.setBox(2,2,2);
    cout << "Volume of Box: " << b1.getVolume();
}

void Box::setBox(int h, int w, int d)
{
    height = h;
    width = w;
    depth = d;
}

int Box::getVolume()
{
    return height * width * depth;
}