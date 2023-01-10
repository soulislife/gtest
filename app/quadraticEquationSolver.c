#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "quadraticEquationSolver.h"

double *quadraticEquationSolver(int a, int b, int c) {

    double *roots = malloc(2*sizeof(double));

    int discriminant = b*b - 4*a*c;
    if (discriminant < 0) {
        roots = NULL;
    }
    else if (discriminant == 0){
        roots[0] = -b/(2*a);
        roots[1] = roots[0];
    }
    else {
        roots[0] = (-b+sqrt(discriminant))/(2*a);
        roots[1] = (-b-sqrt(discriminant))/(2*a);
    }
    return roots;
}

