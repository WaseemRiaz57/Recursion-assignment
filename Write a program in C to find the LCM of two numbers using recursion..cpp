//10.	Write a program in C to find the LCM of two numbers using recursion.
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    static int common_multiple = 1;
    if (common_multiple % a == 0 && common_multiple % b == 0) {
        return common_multiple;
    }
    common_multiple++;
    return lcm(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcmResult);

}
