#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int = 1, int = 1);
    void display();
    int getReal();
    int getImg();
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    Complex operator++();
    Complex operator++(int);
    friend ostream &operator<<(ostream &, Complex &);
    friend Complex operator+(int, Complex &);
};

int main()
{
    {
        Complex c1(20, 1);
        c1.display();

        Complex c2(10, -1);
        c2.display();

        cout << "Addition: " << endl;
        Complex c3 = c1 + c2;
        c3.display();
    }

    {
        Complex c1(20, 1);
        c1.display();

        Complex c2(10, -1);
        c2.display();

        cout << "Subtraction: " << endl;
        Complex c3 = c1 - c2;
        c3.display();
    }

    {
        Complex c1(20, 1);
        c1.display();

        Complex c2(10, -1);
        c2.display();

        cout << "Multiplication: " << endl;
        Complex c3 = c1 * c2;
        c3.display();
    }

    {
        cout << "Pre-increment: " << endl;
        Complex c1(20, 1);
        c1.display();
        ++c1;
        c1.display();
        ++c1;
        c1.display();
    }

    {
        cout << "Post-increment: " << endl;
        Complex c1(20, 1);
        c1.display();
        c1++;
        c1.display();
        c1++;
        c1.display();
    }

    {
        cout << "cout: " << endl;
        Complex c1(20, 1);
        cout << c1;
    }

    {
        cout << "5+c1: " << endl;
        Complex c1(20, 1);
        cout << "C1: " << c1;
        Complex c3 = 5 + c1;
        cout << "5+c1" << c3;
    }
}

Complex::Complex(int real, int img)
{
    this->img = img;
    this->real = real;
}

void Complex::display()
{
    if (img < 0)
    {
        cout << "Complex Number: "
             << "[" << real << img << "i]" << endl;
    }
    else
    {
        cout << "Complex Number: "
             << "[" << real << "+" << img << "i]" << endl;
    }
}

int Complex::getReal()
{
    return real;
}

int Complex::getImg()
{
    return img;
}

Complex Complex::operator+(Complex &o)
{
    Complex temp;
    temp.real = this->real + o.real;
    temp.img = this->img + o.img;
    return temp;
}

Complex Complex::operator-(Complex &o)
{
    Complex temp;
    temp.real = this->real - o.real;
    temp.img = this->img - o.img;
    return temp;
}

Complex Complex::operator*(Complex &o)
{
    Complex temp;
    temp.real = this->real * o.real;
    temp.img = this->img * o.img;
    return temp;
}

Complex Complex::operator++()
{
    Complex temp;
    temp.real = ++this->real;
    temp.img = ++this->img;
    return temp;
}

Complex Complex::operator++(int a)
{
    Complex temp;
    temp.real = this->real++;
    temp.img = this->img++;
    return temp;
}

ostream &operator<<(ostream &out, Complex &c)
{
    if (c.img < 0)
    {
        out << "Complex Number: "
            << "[" << c.real << c.img << "i]" << endl;
    }
    else
    {
        out << "Complex Number: "
            << "[" << c.real << "+" << c.img << "i]" << endl;
    }
    return out;
}

Complex operator+(int n, Complex &c)
{
    Complex temp;
    temp.real = n + c.real;
    temp.img = c.img;
    return temp;
}
