#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, result;

    printf("Simple Calculator\n");
    printf("1. Power\n");
    printf("2. Factorial\n");
    printf("3. Addition\n");
    printf("4. Subtraction\n");
    printf("5. Multiplication\n");
    printf("6. Division\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and exponent: ");
            double base, exponent;
            scanf("%lf %lf", &base, &exponent);
            result = pow(base, exponent);
            printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);
            break;
   
}