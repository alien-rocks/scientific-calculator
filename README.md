# Scientific Calculator

Welcome to the **Scientific Calculator** project! This C-based calculator performs a wide range of mathematical operations, including basic arithmetic, advanced trigonometric and logarithmic calculations, as well as differentiation, numerical integration, and quadratic equation solving.

## Features

The Scientific Calculator includes the following features:

1. **Basic Arithmetic Operations:**
   - Addition
   - Subtraction
   - Multiplication
   - Division
   - Modulus

2. **Advanced Mathematical Functions:**
   - Square Root
   - Power (`x^y`)
   - Exponential (`e^x`)
   - Logarithmic (`log(x)`)

3. **Trigonometric Functions (in degrees):**
   - Sine (`sin(x)`)
   - Cosine (`cos(x)`)
   - Tangent (`tan(x)`)

4. **Factorial Calculation**:
   - Computes the factorial of an integer input.

5. **Differentiation (Polynomial)**:
   - Computes the derivative of a polynomial up to any desired order.

6. **Numerical Integration**:
   - Approximates the definite integral of functions like `x^n`, `sin(x)`, `cos(x)`, and `e^x` using the trapezoidal rule.

7. **Quadratic Equation Solver**:
   - Solves quadratic equations (`ax^2 + bx + c = 0`) and handles both real and complex roots.

## How to Use

### Running the Program

1. Clone this repository to your local machine:
    ```bash
    git clone https://github.com/yourusername/scientific-calculator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd scientific-calculator
    ```

3. Compile the code using a C compiler:
    ```bash
    gcc calculator.c -o calculator -lm
    ```

4. Run the executable:
    ```bash
    ./calculator
    ```

### Menu Options

After running the program, you will be presented with a menu of options. Simply enter the number corresponding to the operation you wish to perform:

1. **Basic Arithmetic**: Select options 1 through 5 for addition, subtraction, multiplication, division, and modulus.
2. **Square Root**: Select option 6 to calculate the square root of a number.
3. **Trigonometric Functions**: Choose option 7 to calculate sine, cosine, or tangent of an angle in degrees.
4. **Logarithmic Function**: Select option 8 to calculate the base-10 logarithm (`log(x)`).
5. **Power**: Choose option 9 to compute `x^y`.
6. **Exponential**: Select option 10 to calculate the exponential (`e^x`).
7. **Factorial**: Select option 11 to calculate the factorial of an integer.
8. **Differentiation**: Choose option 12 to compute the derivative of a polynomial.
9. **Numerical Integration**: Select option 13 to approximate the integral of common functions using the trapezoidal rule.
10. **Quadratic Equation Solver**: Select option 14 to solve a quadratic equation and find its roots.
11. **Exit**: Select option 15 to exit the calculator.
