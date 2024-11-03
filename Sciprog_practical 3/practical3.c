#include <stdio.h>
#include <math.h>

int main() {
   
    double a = 0.0;                   
    double b = M_PI / 3;
    int N = 12;                       
    double h = (b - a) / (N - 1);     
    double sum = 0.0;
    double result;

    sum += tan(a) + tan(b);

    for (int i = 1; i < N - 1; i++) {
        double x_i = a + i * h;       
        sum += 2 * tan(x_i);          
    }

    result = (b - a) * sum / (2 * N);

    printf("Calculated integral  %.6f\n", result);
    printf("Actual value   %.6f\n", log(2.0));
    printf("Difference is %.6f\n", fabs(result - log(2.0)));

    return 0;
}
