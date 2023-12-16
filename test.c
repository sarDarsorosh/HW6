#include <stdio.h>
#include <math.h>

//40224037
void solver(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two real roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("The equation has one real root: %.2f\n", root);
    } else {
        printf("No real roots for the equation.\n");
    }
}

int main() {
    double a, b, c;
    
  
    printf("Enter the coefficients a, b, and c (separated by spaces): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    
    solver(a, b, c);

    return 0;
}