//====================================================================================================
// compile command: g++-14 -std=c++23 task_02_02.cpp -o task_02_02
// run command: ./task_02_02
//====================================================================================================

#include <iostream>
#include <cmath>
#include <print>

int main()
{
    const double epsilon = 1e-9;

    double quadr_equa_coeff_a;
    double quadr_equa_coeff_b;
    double quadr_equa_coeff_c;
    double quadr_equa_discriminant;
    double quadr_equa_root1;
    double quadr_equa_root2;

    std::cout << "Enter coefficients of quadratic equation a, b, c: \n";
    std::cout << "Enter coefficient a: ";
    std::cin >> quadr_equa_coeff_a;
    std::cout << "Enter coefficient b: ";
    std::cin >> quadr_equa_coeff_b;
    std::cout << "Enter coefficient c: ";
    std::cin >> quadr_equa_coeff_c;

    if (std::abs(quadr_equa_coeff_a) < epsilon)
    {
        if (std::abs(quadr_equa_coeff_b) < epsilon)
        {
            std::print("No roots of quadratic equation\n");
        }
        else
        {
            quadr_equa_root1 = -quadr_equa_coeff_c / quadr_equa_coeff_b;
            std::print("(Linear equation) One root of quadratic equation: {}\n", quadr_equa_root1);
        }
    }
    else
    {
        quadr_equa_discriminant = quadr_equa_coeff_b * quadr_equa_coeff_b - 4.0 * quadr_equa_coeff_a * quadr_equa_coeff_c;

        if (quadr_equa_discriminant < -epsilon)
        {
            std::print("No real roots of quadratic equation\n");
        }
        else if (std::abs(quadr_equa_discriminant) < epsilon)
        {
            quadr_equa_root1 = -quadr_equa_coeff_b / (2.0 * quadr_equa_coeff_a);
            std::print("One root of quadratic equation: {}\n", quadr_equa_root1);
        }
        else
        {
            quadr_equa_root1 = (-quadr_equa_coeff_b + std::sqrt(quadr_equa_discriminant)) / (2.0 * quadr_equa_coeff_a);
            quadr_equa_root2 = (-quadr_equa_coeff_b - std::sqrt(quadr_equa_discriminant)) / (2.0 * quadr_equa_coeff_a);
            std::print("Two roots of quadratic equation: {}, {}\n", quadr_equa_root1, quadr_equa_root2);
        }
    }

    return 0;
}