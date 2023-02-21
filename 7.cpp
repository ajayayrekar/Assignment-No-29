/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}*/

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    int getHours() const {
        return hours;
    }

    void setHours(int h) {
        hours = h;
    }

    int getMinutes() const {
        return minutes;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    operator Minute() {
        int totalMinutes = hours * 60 + minutes;
        return Minute(totalMinutes);
    }

    void display() const {
        cout << hours << " hours, " << minutes << " minutes" << endl;
    }
};

class Minute {
private:
    int minutes;
public:
    Minute(int m) {
        minutes = m;
    }

    int getMinutes() const {
        return minutes;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    operator Time() {
        int h = minutes / 60;
        int m = minutes % 60;
        return Time(h, m);
    }

    void display() const {
        cout << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 30);
    t1.display();

    Minute m1;
    m1.display();

    m1 = static_cast<Minute>(t1);
    t1.display();
    m1.display();

    return 0;
}
