#include <stdio.h>


void next_fibonacci(int *a, int *b) {
    int temp = *a + *b;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    
    
    printf("Enter the value of n = ");
    scanf("%d", &n);
    
    int a = 0, b = 1;
    
    printf("Fibonacci series up to %d is \n", n);
    printf("%d ", a); 
    for (int i = 1; i < n; i++) {
        printf("%d ", b);
        next_fibonacci(&a, &b);
    }
    
    printf("\n");
    return 0;
}
