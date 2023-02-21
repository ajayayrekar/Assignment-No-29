/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {}
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    void setData(int r, int i) {
        real = r;
        imag = i;
    }
    int operator()() {
        return real;
    }
};

int main() {
    Complex c1;
    c1.setData(3, 4);
    int x;
    x = c1();
    cout << "Real part of c1 = " << x << endl;
    return 0;
}
