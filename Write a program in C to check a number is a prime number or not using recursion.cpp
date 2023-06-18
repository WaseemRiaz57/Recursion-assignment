//9.	Write a program in C to check a number is a prime number or not using recursion
#include <stdio.h>
int isPrime(int num, int divisor) {
    if (num <= 2) {
        if (num == 2)
            return 1; // Prime number
        else
            return 0; // Not a prime number
    }

    if (num % divisor == 0)
        return 0; // Not a prime number
    if (divisor * divisor > num)
        return 1; // Prime number

    return isPrime(num, divisor + 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number, 2))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

}
