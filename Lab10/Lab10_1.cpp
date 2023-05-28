#include <iostream>
using namespace std;

class Complex
{
private:
    double realPart;
    double imaginaryPart;

public:
    Complex() : realPart(0.0), imaginaryPart(0.0) {}
    Complex(double real, double imaginary)
        : realPart(real), imaginaryPart(imaginary) {}

    double getRealPart() const { return realPart; }
    double getImaginaryPart() const { return imaginaryPart; }

    void setRealPart(double real) { realPart = real; }
    void setImaginaryPart(double imaginary) { imaginaryPart = imaginary; }

    Complex operator+(const Complex &other) const
    {
        return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
    }
    Complex operator-(const Complex &other) const
    {
        return Complex(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
    }
    Complex &operator=(const Complex &other)
    {
        this->realPart = other.realPart;
        this->imaginaryPart = other.imaginaryPart;
        return *this;
    }
    Complex operator*(const Complex &other) const
    {
        double real = (realPart * other.realPart) - (imaginaryPart * other.imaginaryPart);
        double imaginary = (realPart * other.imaginaryPart) + (imaginaryPart * other.realPart);
        return Complex(real, imaginary);
    }
    bool operator==(const Complex &other) const
    {
        return (realPart == other.realPart) && (imaginaryPart == other.imaginaryPart);
    }
    bool operator!=(const Complex &other) const
    {
        return !(*this == other);
    }

    friend ostream &operator<<(ostream &os, const Complex &complex);
    friend istream &operator>>(istream &is, Complex &complex);
};

ostream &operator<<(ostream &os, const Complex &complex)
{
    os << complex.realPart;
    if (complex.imaginaryPart >= 0)
        os << "+" << complex.imaginaryPart << "i";
    else
        os << "-" << -(complex.imaginaryPart) << "i";

    return os;
}

istream &operator>>(istream &is, Complex &complex)
{
    cout << "Enter the real part: ";
    is >> complex.realPart;
    cout << "Enter the imaginary part: ";
    is >> complex.imaginaryPart;

    return is;
}

int main()
{
    Complex c1(2.0, 3.0);
    Complex c2(4.0, -1.0);
    Complex c3;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    c3 = c1 + c2;
    cout << "c1 + c2 =" << c3 << endl;

    c3 = c1 - c2;
    cout << "c1 - c2 =" << c3 << endl;

    c3 = c1 * c2;
    cout << "c1 * c2 = " << c3 << endl;

    if (c1 == c2)
        cout << "c1 is equal to c2" << endl;
    else
        cout << "c1 is not equal to c2" << endl;

    return 0;
}

/*
c1 = 2+3i
c2 = 4-1i
c1 + c2 =6+2i
c1 - c2 =-2+4i
c1 * c2 = 11+10i
c1 is not equal to c2
*/