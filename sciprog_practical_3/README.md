# Practical 3 - Calculating the Area Under a Curve

This practical uses loops and the trapezoidal rule to calculate the area under a curve defined by \( f(x) = \tan(x) \) over the interval \( [0, \pi/3] \). The calculated value is compared to the analytical result \( \ln(2) \).

---

**Filename:** `practical3.c`

### OVERVIEW 
This program:
- Computes the integral of \( \tan(x) \) from 0 to \( \pi/3 \) using the trapezoidal rule.
- Utilizes 12 points (\( N = 12 \)) for the approximation.
- Compares the computed result with the exact value \( \ln(2) \).

### KEYSTEPS
1. Calculates the step size \( h = \frac{b-a}{N-1} \).
2. Sums up \( \tan(x_i) \) values for equidistant points in the interval:
   - Endpoints contribute once: \( \tan(a) \) and \( \tan(b) \).
   - Interior points contribute twice: \( 2 \times \tan(x_i) \).
3. Applies the trapezoidal rule formula:
   \[
   \int_{a}^{b} f(x) dx \approx \frac{b-a}{2N} \left[f(a) + 2\sum_{i=1}^{N-1} f(x_i) + f(b) \right]
   \]
4. Outputs the calculated integral, the actual value \( \ln(2) \), and the difference.

---

## COMPILATION and EXECUTION
    gcc practical3.c -o practical3 -lm
    ./practical3

## OUTPUT
    Calculated integral 0.637454
    Actual value 0.693147
    Difference is 0.055693







