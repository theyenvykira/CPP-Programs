#include <iostream>
#include <cmath> // Required for sqrt and pow

using namespace std;

int main() {
    double x1, y1, x2, y2, distance;

    cout << "Enter coordinates for Point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates for Point 2 (x2 y2): ";
    cin >> x2 >> y2;

    // Distance formula: sqrt( (x2-x1)^2 + (y2-y1)^2 )
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "---------------------------" << endl;
    cout << "The distance between the points is: " << distance << endl;

    return 0;
}
