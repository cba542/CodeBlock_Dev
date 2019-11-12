/*
Implement the function find_roots to find the roots of the quadratic equation: ax2 + bx + c = 0.
For example, the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.
*/

#include <stdlib.h>
#include <stdio.h>

void find_roots(double a, double b, double c, double *root1, double *root2)
{
    double val1, val2;
    val1 = (-b + (sqrt(b*b - 4*a*c)));
    val1 = (val1/ (2*a));
    printf("val1 = %d\n",val1);
    val2 = (-b - (sqrt(b*b - 4*a*c)));
    val2 = (val2/ (2*a));
    printf("val1 = %d\n",val2);
    *root1 = val1;
    *root2 = val2;
    //exit(0);
}

#ifndef RunTests
int main()
{
    double root1, root2;
    find_roots(2, 10, 8, &root1, &root2);
    printf("Roots: %f, %f", root1, root2);
}
#endif

