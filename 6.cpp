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
    int seconds;

public:
    Time(int durationSeconds) {
        hours = durationSeconds / 3600;
        minutes = (durationSeconds % 3600) / 60;
        seconds = durationSeconds % 60;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int durationSeconds;
    cout << "Enter time duration in seconds: ";
    cin >> durationSeconds;
    Time t1 = durationSeconds;
    t1.display();
    return 0;
}
