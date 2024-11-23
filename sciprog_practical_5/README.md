# Practical 5 - User Input, Fibonacci Series, and Hyperbolic Tangent

This practical explores user input handling, pointer usage, and mathematical computations in C. Two programs are implemented: one for generating a Fibonacci series and another for calculating the inverse hyperbolic tangent using two methods.

---

## 1. FIBONACCI SERIES

**Filename:** `fibonacciseries.c`

### OVERVIEW
This program:
- Generates the Fibonacci series up to a user-defined number of terms \( n \).
- Uses pointers to calculate the next Fibonacci number in the sequence.

### CONPILATION and EXECUTION
1. Compile the program:
   ```bash
   gcc fibonacciseries.c -o practical_5

2. Execution:
   ```bash
   practical_5

### EXAMPLE OUTPUT
    Enter the value of n for the Fibonacci series: 8
    Fibonacci series up to 10 terms:
    0 1 1 2 3 5 8 13 

## 2. Hyperbolic Tangent Calculation

**Filename:** `hyperbolictangent.c`

### OVERVIEW
This program:

- Calculates the inverse hyperbolic tangent (arctanh(x)) using:
  - A Maclaurin series approximation.
  - A formula involving natural logarithms.
- Accepts a user-defined precision (δ) for the Maclaurin series.
- Computes values for x in the range [−0.9,0.9] , sampled every 0.01.
- Compares the results of the two methods to 10 significant figures.

### CONPILATION and EXECUTION
1. Compile the program:
   ```bash
   gcc hyperbolictangent.c -o practical5 -lm
2. Execution:
   ```bash
   practical5

### EXAMPLE OUTPUT
    Enter precision delta: 0.0001
      x        artanh1(x)       artanh2(x)      Difference
    -0.90    -1.4722194895    -1.4722194896    0.0000000001
    -0.89    -1.4074009318    -1.4074009319    0.0000000001
    ...
    0.89      1.4074009318     1.4074009319    0.0000000001
    0.90      1.4722194895     1.4722194896    0.0000000001
   
  
