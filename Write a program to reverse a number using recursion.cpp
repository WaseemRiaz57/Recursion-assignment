//8.	Write a program to reverse a number using recursion
#include <iostream>

using namespace std;

int reversed = 0;

int reverseNumber(int number) {
    if (number != 0) {
        reversed = reversed * 10 + number % 10;
        reverseNumber(number / 10);
    }
    
    return reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reversedNumber = reverseNumber(number);
    cout << "Reversed number: " << reversedNumber << endl;
}

