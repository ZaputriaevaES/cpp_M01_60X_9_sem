//====================================================================================================
// compile command: g++-14 -std=c++23 task_02_05.cpp -o task_02_05
// run command: ./task_02_05
//====================================================================================================

#include <iostream>
#include <cmath>
#include <print>

int main()
{
    double epsilon;
    double pi_value = 0.0;
    double e_value = 0.0;
    double current_row_term = 1.0;
    int denominator = 1;
    int n = 0;

    std::cout << "Enter precision epsilon: ";
    std::cin >> epsilon;

    while (std::abs(current_row_term) >= epsilon)
    {
        pi_value += current_row_term;
        denominator += 2;
        current_row_term = -current_row_term * (denominator - 2) / denominator;
    }
    pi_value *= 4.0;

    current_row_term = 1.0;
    while (current_row_term >= epsilon)
    {
        e_value += current_row_term;
        n++;
        current_row_term = current_row_term / n;
    }

    std::print("pi = {}\n", pi_value);
    std::print("e = {}\n", e_value);

    return 0;
}