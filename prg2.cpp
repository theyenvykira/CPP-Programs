#include <iostream>

using namespace std;

int main() {
    double radius, area, circumference;
    const double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Formula for Area: PI * r^2
    area = PI * radius * radius;

    // Formula for Circumference: 2 * PI * r
    circumference = 2 * PI * radius;

    cout << "---------------------------" << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
