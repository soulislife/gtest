#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "quadraticEquationSolver.h"
}

TEST(quadraticEquationTest, oneRoot)
{
    double expectedRoot = -1.0;
    double const *roots = quadraticEquationSolver(1,2,1);
    EXPECT_EQ(expectedRoot, roots[0]);
    EXPECT_EQ(roots[0], roots[1]);
}

TEST(quadraticEquationTest, noRoots)
{
    double *roots = quadraticEquationSolver(1,1,1);
    EXPECT_EQ(roots, nullptr);
}

TEST(quadraticEquationTest, doubleRoot)
{
    std::array expectedRoots = {5.0, 1.0};
    double const *roots = quadraticEquationSolver(1,-6,5);
    EXPECT_EQ(expectedRoots[0], roots[0]);
    EXPECT_EQ(expectedRoots[1], roots[1]);
}
