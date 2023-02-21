/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}*/
#include <iostream>

using namespace std;

class Rupee {
private:
    int amount;

public:
    Rupee(int a = 0) : amount(a) {}

    void display() {
        cout << "Rupee: " << amount << endl;
    }

    operator Dollar(); // Rupee to Dollar conversion function
};

class Dollar {
private:
    int amount;

public:
    Dollar(int a = 0) : amount(a) {}

    void display() {
        cout << "Dollar: " << amount << endl;
    }

    operator Rupee(); // Dollar to Rupee conversion function
};

Rupee::operator Dollar() {
    return Dollar(amount / 70); // Assuming 1 Dollar = 70 Rupees
}

Dollar::operator Rupee() {
    return Rupee(amount * 70); // Assuming 1 Dollar = 70 Rupees
}

int main() {
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
