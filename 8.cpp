/*8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}*/

#include <iostream>
using namespace std;

class Rupee {
private:
    int amount;
public:
    Rupee(int amt = 0) {
        amount = amt;
    }
    operator int() const {
        return amount;
    }
};

int main() {
    Rupee r = 10;
    int x = r;
    cout << "Value in rupees: " << r << endl;
    cout << "Value in int: " << x << endl;
    return 0;
}
