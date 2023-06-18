//7.	Write a program to convert decimal to binary using recursion
#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        cout << decimal % 2;
    }
}

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary equivalent: ";
    decimalToBinary(decimal);

    cout << endl;
}
