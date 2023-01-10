#include <stdio.h>

#include "quadraticEquationSolver.h"

int main()
{
    double const *mainRoots = quadraticEquationSolver(1, 2, 1);
    if (mainRoots != NULL)
        printf("%f %f", mainRoots[0], mainRoots[1]);
    else
        printf("Roots doesn't exist\n");
    return 0;
}
