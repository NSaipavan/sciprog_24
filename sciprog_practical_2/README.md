# Practical 2 - Floating Point Arithmetic

## CONVERSION

**Filename:** `Conversion.c`

### OVERVIEW
This program demonstrates:
- Conversion of an integer to its binary representation.
- Counting the number of binary digits using logarithmic operations.
- Observing discrepancies between integer and floating-point representations.

### COMPILATION and EXECUTION.
1. Compile the program using:
   ```bash
   gcc Conversion.c -o Conversion -lm
2. Execution:
   ```bash
   ./Conversion

### OUTPUT:
    The number of digits is 19
    inum=345028,  fnum=345028.000000, inum in binary=1010100001100100100
    

## SUM

**Filename:** `Sum.c`

### OVERVIEW
This program:
- Calculates two sums of the harmonic series from 1 to 1000:                                    
   -Sum in increasing order.                                                                    
   -Sum in decreasing order.
- Compares the results to observe differences caused by floating-point arithmeti

### COMPILATION and EXECUTION.
1. Compile the program using:
   ```bash
   gcc Sum.c -o Sum
2. Execution:
   ```bash
   ./Sum

### OUTPUT:
    Sum1=8.685465
    Sum2=8.585472
    Difference between the two is 0.099993
