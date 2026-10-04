//====================================================================================================
// compile command: g++-14 -std=c++23 task_02_01.cpp -o task_02_01
// run command: ./task_02_01
//====================================================================================================

#include <iostream>
#include <cmath>
#include <print>

int main()
{
    const double square_root_of_5       = std::sqrt(5.0);
    const double golden_ratio           = (1.0 + square_root_of_5) / 2.0;
    const double golden_ratio_conjugate = (1.0 - square_root_of_5) / 2.0;

    int    fibo_row_n_pos;
    double fibo_row_n_val_approx;
    int    fibo_row_n_val;

    std::print("Enter number's position in Fibonacci row n: ");
    std::cin >> fibo_row_n_pos;

    fibo_row_n_val_approx = (std::pow(golden_ratio, fibo_row_n_pos) - std::pow(golden_ratio_conjugate, fibo_row_n_pos)) / square_root_of_5;

    fibo_row_n_val = static_cast<int>(std::round(fibo_row_n_val_approx));

    std::print("Value of number n in Fibonacci row: {}\n", fibo_row_n_val);

    return 0;
}