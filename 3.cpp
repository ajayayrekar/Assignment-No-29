/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}*/

#include <iostream>
using namespace std;

class Item {
    int id, quantity;
public:
    Item() {}
    Item(int i, int q) {
        id = i;
        quantity = q;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

class Product {
    int id, quantity, price;
public:
    Product() {}
    void setData(int i, int q, int p) {
        id = i;
        quantity = q;
        price = p;
    }
    operator Item() {
        return Item(id, quantity);
    }
};

int main() {
    Item i1;
    Product p1;
    p1.setData(3, 4, 10);
    i1 = p1;
    i1.display();
    return 0;
}
