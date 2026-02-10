#include <iostream>

using namespace std;

int main() {
    // We use 'long' as requested, and 'double' for the average to get decimals
    long num1, num2, num3, num4, num5;
    long sum;
    double average;

    cout << "Enter five long numbers: " << endl;
    
    // Accepting five inputs
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Calculating sum
    sum = num1 + num2 + num3 + num4 + num5;

    // Calculating average
    // We divide by 5.0 (instead of 5) to ensure a decimal result
    average = sum / 5.0;

    cout << "---------------------------" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average Value: " << average << endl;

    return 0;
}
