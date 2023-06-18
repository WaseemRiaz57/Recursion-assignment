//1.	Write a program in C to print first n numbers using recursion.
#include <iostream>

using namespace std;

void printNumbers(int n) {
    if (n<1)
	 {
        cout << n << " ";
        return;
    }

    printNumbers(n-1);
    cout << n << " ";
}

int main() {
    int num;
    cout << "Enter value : ";
    cin >> num;
    cout << "The first " << num << " numbers are: ";
    printNumbers(num);
   
}



