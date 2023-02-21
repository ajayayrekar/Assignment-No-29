/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

Example-
int main()

{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/

#include <iostream>
using namespace std;

class Dollar {
private:
    int dollars;
public:
    Dollar() {
        dollars = 0;
    }
    Dollar(int d) {
        dollars = d;
    }
    int getDollars() const {
        return dollars;
    }
    void setDollars(int d) {
        dollars = d;
    }
    void display() {
        cout << "$" << dollars << endl;
    }
    operator int() {
        return dollars;
    }
};

int main() {
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}
