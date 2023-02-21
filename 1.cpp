/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
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
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    void operator =(int x) {
        real = x;
        imag = 0;
    }
};

int main() {
    Complex c1;
    int x = 5;
    c1 = x;
    c1.display();
    return 0;
}

