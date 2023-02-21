/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;

p1.setData(3,4);
i1=p1;
return 0;
}*/

#include <iostream>

class Item {
public:
    int x, y;
    void display() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

class Product {
public:
    int a, b;
    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }
    operator Item() {
        Item i;
        i.x = a;
        i.y = b;
        return i;
    }
};

int main() {
    Item i1;
    Product p1;

    p1.setData(3,4);
    i1 = static_cast<Item>(p1);
    i1.display();

    return 0;
}
