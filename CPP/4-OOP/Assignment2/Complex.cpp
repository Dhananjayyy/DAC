#include <iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    Complex();
    Complex(int, int);
    void Display() const;
    int getReal() const;
    int getImg() const;
    void setImg(int);
    void setReal(int);
};

int main()
{
    Complex c1(2,-2);
    c1.Display();
    
    const Complex c2(3,-3);
    cout << c2.getReal() << c2.getImg() << "i" << endl;
}

Complex::Complex()
{
    real=img=1;
}


Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

void Complex::Display() const
{
    cout << real << img << "i" << endl;
}

int Complex::getImg() const
{
    return img;
}

int Complex::getReal() const
{
    return real;
}

void Complex::setReal(int a)
{
    real = a;
}

void Complex::setImg(int a)
{
    img = a;
}