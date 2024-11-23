# Practical 6 - Matrix Multiplication with Multiple Files and Makefile

This practical involves implementing matrix multiplication using multiple C files and managing the build process with a Makefile.

---

### OVERVIEW
The program:
- Multiplies two matrices \( A_{n \times p} \) and \( B_{p \times q} \) to produce a result matrix \( C_{n \times q} \).
- Uses:
  - \( N = 5, P = 3, Q = 4 \) as the dimensions of matrices \( A, B, \) and \( C \).
  - Initialization formulas:
    - \( A[i][j] = i + j \)
    - \( B[i][j] = i - j \)
- Outputs all three matrices \( A, B, \) and \( C \).

---

### COMPILATION and EXECUTION

### Files
1. **`main.c`**: Handles initialization and printing of matrices.
2. **`matmult.c`**: Contains the `matmult` function to calculate \( C = A \times B \).
3. **`Makefile`**: Automates the build process.

### Compilation
1. Use the `Makefile` for compilation:
   ```bash
   make

2. Execution:
   ```bash
   ./matmult_program

### CLEANUP
- To remove object files and the executable:
  ```bash
  make clean

### OUTPUT
    Matrix A:
    0.00 1.00 2.00 
    1.00 2.00 3.00 
    2.00 3.00 4.00 
    3.00 4.00 5.00 
    4.00 5.00 6.00 

    Matrix B:
    0.00 -1.00 -2.00 -3.00 
    1.00  0.00 -1.00 -2.00 
    2.00  1.00  0.00 -1.00 

    Matrix C (Result of A * B):
    5.00  1.00 -3.00 -7.00 
    8.00  2.00 -4.00 -10.00 
    11.00 3.00 -5.00 -13.00 
    14.00 4.00 -6.00 -16.00 
    17.00 5.00 -7.00 -19.00 



