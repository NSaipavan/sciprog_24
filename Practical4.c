#include <stdio.h>
#include <math.h>

double tan_values[13];
double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

double trapezoidal_rule(double *y_values, double step_size, int n) {
    double area = 0.0;
    for (int i = 0; i < n - 1; i++) {
        area += 0.5 * (y_values[i] + y_values[i + 1]) * step_size;
    }
    return area;
}

int main(void) {
    double degrees;
    double radians;

    for (int i = 0; i <= 12; i++) {
        degrees = i * 5.0;               
        radians = degrees_to_radians(degrees); 
        tan_values[i] = tan(radians);    
        printf("tan(%0.2f degrees) = %f\n", degrees, tan_values[i]);
    }

    double area = trapezoidal_rule(tan_values, degrees_to_radians(5.0), 13);
    printf("The area under the curve of tan(x) from 0 to 60 degrees is %f\n", area);

    return 0;
}
