#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    bool operator==(Distance d) {
        int total1 = feet * 12 + inches;
        int total2 = d.feet * 12 + d.inches;

        return (total1 == total2);
    }

    void display() {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(5, 8);

    cout << "Distance 1: ";
    d1.display();
    cout << endl;

    cout << "Distance 2: ";
    d2.display();
    cout << endl;

    if (d1 == d2)
        cout << "Both distances are equal." << endl;
    else
        cout << "Distances are not equal." << endl;

    return 0;
}
