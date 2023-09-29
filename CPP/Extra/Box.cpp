#include <iostream>
using namespace std;

class Box
{
    int height, width, depth;
    public:
    Box(int=1, int=1, int=1);
    int getVolume();
    bool operator>(Box &);
    bool operator<(Box &);
    bool operator==(Box &);
    //~Box();
    
};

int main()
{
    Box b1(3,8,7);
    cout << "Volume of Box 1: " << b1.getVolume() << endl;

    Box b2(3,8,5);
    cout << "Volume of Box 2: " << b1.getVolume() << endl;

    if (b1>b2)
    {
        cout << "Box 1 is bigger than Box 2" << endl;
    }
    else if (b2 > b1)
    {
        cout << "Box 2 is bigger than Box 1" << endl;
    }
    else
    {
        cout << "Box 1 and Box 2 are similar" << endl;
    }

}

Box::Box(int height, int width, int depth)
{
    this->height = height;
    this->width = width;
    this->depth = depth;
}

int Box::getVolume()
{
    return height * width * depth;
}

bool Box::operator>(Box &box)
{
    if (this->getVolume() > box.getVolume())
    {
        return true;
    }
    return false;
}

bool Box::operator<(Box &box)
{
    if (this->getVolume() < box.getVolume())
    {
        return true;
    }
    return false;
}

bool Box::operator==(Box &box)
{
    if (this->getVolume() == box.getVolume())
    {
        return true;
    }
    return false;
}