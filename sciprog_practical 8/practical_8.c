#include <stdio.h>

int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd_recursive(b, a % b);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int iterative = gcd_iterative(a, b);
    int recursive = gcd_recursive(a, b);
    printf("GCD of %d and %d (Iterative) is: %d\n", a, b, iterative);
    printf("GCD of %d and %d (Recursive) is: %d\n", a, b, recursive);

    return 0;
}
