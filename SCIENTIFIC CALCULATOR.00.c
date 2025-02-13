#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#define PI 3.14159265

void clear_screen() {
     system("cls");
}

void main()
{
    int choice, trig_choice, fact, i, rad_or_deg;
    float a, b, result;
    double complex z1, z2, z_result;
    char cont;

    while(1)
    {
        printf("\t\t\t\tWelcome to the Scientific Calculator!\n");
        printf("\nEnter 1: For Addition");
        printf("\nEnter 2: For Subtraction");
        printf("\nEnter 3: For Multiplication");
        printf("\nEnter 4: For Division");
        printf("\nEnter 5: For Modulus");
        printf("\nEnter 6: For Square Root");
        printf("\nEnter 7: For Trigonometric Functions (sin, cos, tan)");
        printf("\nEnter 8: For log(x)");
        printf("\nEnter 9: For Power (x^y)");
        printf("\nEnter 10: For Exponential (e^x)");
        printf("\nEnter 11: For Factorial");
        printf("\nEnter 12: For Differentiation");
        printf("\nEnter 13: For Integration");
        printf("\nEnter 14: For Solving Equations");
        printf("\nEnter 15: For Complex Numbers Operations");
        printf("\nEnter 16: Exit");
        printf("\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("You selected Addition.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &a);
                printf("\nEnter the second number: ");
                scanf("%f", &b);
                result = a + b;
                printf("\nResult: The sum of %f and %f is %f\n", a, b, result);
                break;
            case 2:
                printf("You selected Subtraction.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &a);
                printf("\nEnter the second number: ");
                scanf("%f", &b);
                result = a - b;
                printf("\nResult: The subtraction of %f and %f is %f\n", a, b, result);
                break;
            case 3:
                printf("You selected Multiplication.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &a);
                printf("\nEnter the second number: ");
                scanf("%f", &b);
                result = a * b;
                printf("\nResult: The multiplication of %f and %f is %.2f\n", a, b, result);
                break;
            case 4:
                printf("You selected Division.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &a);
                printf("\nEnter the second number: ");
                scanf("%f", &b);
                if (b == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = a / b;
                    printf("\nResult: The division of %f and %f is %f\n", a, b, result);
                }
                break;
            case 5:
                printf("You selected Modulus.\n");
                printf("\nEnter the first number: ");
                scanf("%f", &a);
                printf("\nEnter the second number: ");
                scanf("%f", &b);
                result = fmod(a, b);
                printf("\nResult: The modulus of %.2f and %.2f is %.2f\n", a, b, result);
                break;
            case 6:
                printf("You selected Square Root.\n");
                printf("\nEnter the value: ");
                scanf("%f", &a);
                if (a < 0) {
                    printf("Error: Square root of negative numbers is not defined.\n");
                } else {
                    result = sqrt(a);
                    printf("\nResult: The square root of %f is %f\n", a, result);
                }
                break;
            case 7:
                printf("You selected Trigonometric Functions.\n");
                printf("Enter 1 for sin(x), 2 for cos(x), 3 for tan(x): ");
                scanf("%d", &trig_choice);
                printf("\nEnter 1 for Degrees, 2 for Radians: ");
                scanf("%d", &rad_or_deg);
                printf("\nEnter the value: ");
                scanf("%f", &a);
                if (rad_or_deg == 1) {
                    a = a * PI / 180;
                }
                switch(trig_choice) {
                    case 1:
                        result = sin(a);
                        printf("\nResult: The sin of the value is %f\n", result);
                        break;
                    case 2:
                        result = cos(a);
                        printf("\nResult: The cos of the value is %f\n", result);
                        break;
                    case 3:
                        result = tan(a);
                        printf("\nResult: The tan of the value is %f\n", result);
                        break;
                    default:
                        printf("Invalid Trigonometric choice.\n");
                }
                break;
            case 8:
                printf("You selected Logarithmic Function (log).\n");
                printf("\nEnter the value: ");
                scanf("%f", &a);
                if (a <= 0) {
                    printf("Error: Logarithm of non-positive numbers is not defined.\n");
                } else {
                    result = log10(a);
                    printf("\nResult: The log of %f is %f\n", a, result);
                }
                break;
            case 9:
                printf("You selected Power (x^y).\n");
                printf("\nEnter the base (x): ");
                scanf("%f", &a);
                printf("\nEnter the exponent (y): ");
                scanf("%f", &b);
                result = pow(a, b);
                printf("\nResult: %f raised to the power of %f is %f\n", a, b, result);
                break;
            case 10:
                printf("You selected Exponential (e^x).\n");
                printf("\nEnter the value of x: ");
                scanf("%f", &a);
                result = exp(a);
                printf("\nResult: e^%f is %f\n", a, result);
                break;
            case 11:
                printf("You selected Factorial.\n");
                printf("\nEnter an integer value: ");
                scanf("%d", &fact);
                if (fact < 0) {
                    printf("Error: Factorial of negative numbers is not defined.\n");
                } else {
                    result = 1;
                    for (i = 1; i <= fact; i++) {
                        result *= i;
                    }
                    printf("\nResult: The factorial of %d is %.0f\n", fact, result);
                }
                break;
            case 12:
                printf("You selected Differentiation (Polynomial).\n");
                printf("For now, this supports only simple polynomials.\n");
                printf("\nEnter the coefficient of x^2: ");
                scanf("%f", &a);
                printf("\nEnter the coefficient of x: ");
                scanf("%f", &b);
                printf("The derivative of the polynomial is: %fx + %f\n", 2*a, b);
                break;
            case 13:
                printf("You selected Numerical Integration (Trapezoidal rule).\n");
                printf("\nEnter the lower limit of integration: ");
                float lower, upper;
                scanf("%f", &lower);
                printf("\nEnter the upper limit of integration: ");
                scanf("%f", &upper);
                result = ((upper - lower) / 2) * (upper + lower);
                printf("\nResult: The integration result is: %f\n", result);
                break;
            case 14:
                printf("You selected Equation Solver.\n");
                printf("Currently solving quadratic equations of the form ax^2 + bx + c = 0.\n");
                float c;
                printf("\nEnter the coefficient of x^2 (a): ");
                scanf("%f", &a);
                printf("\nEnter the coefficient of x (b): ");
                scanf("%f", &b);
                printf("\nEnter the constant term (c): ");
                scanf("%f", &c);
                float discriminant = b*b - 4*a*c;
                if (discriminant < 0) {
                    printf("The equation has complex roots.\n");
                } else {
                    float root1 = (-b + sqrt(discriminant)) / (2*a);
                    float root2 = (-b - sqrt(discriminant)) / (2*a);
                    printf("The roots are: %f and %f\n", root1, root2);
                }
                break;
            case 15:
                printf("You selected Complex Number Operations.\n");
                printf("Enter real and imaginary parts of the first complex number: ");
                float real1, imag1, real2, imag2;
                scanf("%f %f", &real1, &imag1);
                printf("Enter real and imaginary parts of the second complex number: ");
                scanf("%f %f", &real2, &imag2);
                z1 = real1 + imag1*I;
                z2 = real2 + imag2*I;
                z_result = z1 + z2;
                printf("Sum: %.2f + %.2fi\n", creal(z_result), cimag(z_result));
                z_result = z1 * z2;
                printf("Product: %.2f + %.2fi\n", creal(z_result), cimag(z_result));
                break;
            case 16:
                exit(1);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }

        printf("\nDo you want to perform another calculation? (yes/no): ");
        scanf(" %c", &cont);

        if (cont == 'y' || cont == 'Y') {
            clear_screen();
            printf("Returning to the main menu...\n");
        } else if (cont == 'n' || cont == 'N') {
            printf("Thank you for using the calculator. Exiting...\n");
            exit(0);
        } else {
            printf("Invalid input! Exiting...\n");
            exit(0);
        }
    }
}
