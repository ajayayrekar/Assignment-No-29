/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}*/

#include <iostream>
using namespace std;

class Invent1 {
private:
    int items;
    float price;
public:
    Invent1(int i = 0, float p = 0) {
        items = i;
        price = p;
    }
    operator float() const {
        return items * price;
    }
    operator Invent2() const;
};

class Invent2 {
private:
    int code;
    float value;
public:
    Invent2(int c = 0, float v = 0) {
        code = c;
        value = v;
    }
    void display() {
        cout << "Code: " << code << ", Value: " << value << endl;
    }
};

Invent1::operator Invent2() const {
    return Invent2(items, price);
}

int main() {
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    cout << "Invent1 converted to float: " << tv << endl;
    cout << "Invent1 converted to Invent2: ";
    d1.display();
    return 0;
}
