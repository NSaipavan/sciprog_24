# Practical 4 - Calculating Tangent Values and Area Under the Curve

This practical involves computing tangent values for angles and finding the area under the curve of \( \tan(x) \) from 0 to 60 degrees using the trapezoidal rule.

---

**Filename:** `Practical4.c`

### OVERVIEW
This program:
1. Computes tangent values for angles in the range [0, 60] degrees in steps of 5 degrees.
2. Stores the tangent values in a global array.
3. Uses the trapezoidal rule to calculate the area under the curve of \( \tan(x) \) from 0 to 60 degrees.

---

## COMPILATION and EXECUTION

Compile the program using:                                                                                                  
    ``` gcc Practical4.c -o Practical4 -lm```                                                                               

Execution:                                                                                                                  
    ```./Practical4```

## OUTPUT 
    tan(0.00 degrees) = 0.000000
    tan(5.00 degrees) = 0.087489
    tan(10.00 degrees) = 0.176327
    tan(15.00 degrees) = 0.267949
    tan(20.00 degrees) = 0.364000
    tan(25.00 degrees) = 0.466308
    tan(30.00 degrees) = 0.577350
    tan(35.00 degrees) = 0.700208
    tan(40.00 degrees) = 0.839100
    tan(45.00 degrees) = 1.000000
    tan(50.00 degrees) = 1.191754
    tan(55.00 degrees) = 1.428148
    tan(60.00 degrees) = 1.732051
    The area under the curve of tan(x) from 0 to 60 degrees is 0.695045
   




