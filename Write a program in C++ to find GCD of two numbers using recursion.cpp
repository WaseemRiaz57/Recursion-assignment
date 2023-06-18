//6.	Write a program in C++ to find GCD of two numbers using recursion

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;

}
