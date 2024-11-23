# Practical 8 - Recursive Functions: Greatest Common Divisor (GCD)

This practical focuses on implementing the Euclidean algorithm to compute the Greatest Common Divisor (GCD) of two integers. Both iterative and recursive approaches are demonstrated.

---

**Filename:** `practical_8.c`

## OVERVIEW
The program:
1. Computes the GCD of two integers using:
   - An iterative function based on the Euclidean algorithm.
   - A recursive function.
2. Accepts two integers as input from the user.

## EUCLIDEAN ALGORITHM
The algorithm for GCD calculation works as follows:
1. If \( b = 0 \), return \( a \).
2. Otherwise, replace \( a \) with \( b \) and \( b \) with \( a \mod b \), and repeat.

---

## COMPILATION and EXECUTION

### Compilation
- Compile the program using:
  ```bash
  gcc practical_8.c -o practical8
- Execution:
  ```bash
  practical8

## OUTPUT
    nter two numbers: 10 25
    GCD of 48 and 18 (Iterative) is: 5
    GCD of 48 and 18 (Recursive) is: 5
  
