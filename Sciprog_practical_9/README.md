# Practical 9 - Magic Square Problem

This practical focuses on identifying whether a given matrix is a magic square. A magic square is a square matrix where:
- The sum of elements in each row, column, and both main diagonals is the same.

---

## FILES
1. **`main_stub.c`**: Reads the matrix from a file and checks if it is a magic square.
2. **`magic_square.c`**: Implements the `isMagicSquare` function.
3. **`magic_square.h`**: Header file containing the prototype of the `isMagicSquare` function.
4. **`magic_square.txt`**: Example of a magic square.
5. **`not_magic_square.txt`**: Example of a non-magic square.

## INPUT FILES
- **Magic Square (`magic_square.txt`)**                                                                                     
      2 7 6                                                                                                               
      9 5 1                                                                                                                 
      4 3 8

- **Non-Magic Square (`not_magic_square.txt`)**                                                                             
      1 2 3                                                                                                                 
      4 5 6                                                                                                                 
      7 8 9
  
## COMPILATION and EXECUTION
### Compilation
- Compile the program using:
  ```bash
  gcc main_stub.c magic_square.c -o magic_square
- Execution:
  ```bash
  ./magic_square.txt
  ./not_magic_square.txt

## OUTPUT
    Enter file name: magic_square.txt
    The matrix is a magic square.
    Enter file name: not_magic_square.txt
    The matrix is not a magic square.
