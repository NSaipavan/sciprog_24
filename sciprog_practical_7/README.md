# Practical 7 - Dynamic Memory Allocation and Mathematical Computations

This practical involves:
1. Estimating the value of \( e \) using dynamically allocated arrays.
2. Implementing basic operations with dynamically allocated integer arrays using pointers.

---

## 1. Estimating \( e \) Using Polynomials

**Filename:** `practical7_1.c`

### OVERVIEW
- This program estimates the value of \( e \) using the formula:
  \[
  f(x) = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots
  \]
- The user specifies the order of the polynomial (1 to 15).
- The program dynamically allocates an array to store each term of the series.
- It compares the estimate with the actual value of \( e \) (2.718281828459045).

### COMPILATION and EXECUTION
1. Compile the program:
   ```bash
   gcc practical7_1.c -o practical7.1
2. Execution:
   ```bash
   ./practical7.1

### OUTPUT
    Order 1: Estimated e = 2.0000000000, Difference = 0.7182818285
    Order 2: Estimated e = 2.5000000000, Difference = 0.2182818285
    Order 3: Estimated e = 2.6666666667, Difference = 0.0516151618
    ...
    Order 15: Estimated e = 2.7182818285, Difference = 0.0000000000

## 2. Operations on Dynamically Allocated Arrays

**Filename:** `practical7_2.c`

### OVERVIEW
- This program demonstrates:
  - Dynamically allocating memory for an integer array.
  - Filling the array with ones.
  - Printing the array elements.
  - Freeing the allocated memory.

### COMPILATION and EXECUTION
1. Compile the program:
   ```bash
   gcc practical7_2.c -o practical7.2
2. Execution:
   ```bash
   ./practical7.2

### OUTPUT
    Enter array size: 7
    Array elements: 1 1 1 1 1 1 1

