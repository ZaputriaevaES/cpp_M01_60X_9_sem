//====================================================================================================
// compile command: g++-14 -std=c++23 task_02_04.cpp -o task_02_04
// run command: ./task_02_04
//====================================================================================================

#include <iostream>
#include <print>

int main()
{
    int hundreds_digit;
    int tens_digit;
    int units_digit;
    int three_digit_number;
    int sum_of_cubes;

    std::print("All three-digit Armstrong numbers:\n");
    // Armstrong three-digit number: 100a + 10b + c = a^3 + b^3 + c^3

    for (hundreds_digit = 1; hundreds_digit <= 9; hundreds_digit++)
    {
        for (tens_digit = 0; tens_digit <= 9; tens_digit++)
        {
            for (units_digit = 0; units_digit <= 9; units_digit++)
            {
                three_digit_number = hundreds_digit * 100 + tens_digit * 10 + units_digit;

                sum_of_cubes = hundreds_digit * hundreds_digit * hundreds_digit +
                               tens_digit     * tens_digit     * tens_digit     +
                               units_digit    * units_digit    * units_digit;

                if (three_digit_number == sum_of_cubes)
                {
                    std::print("{}\n", three_digit_number);
                }
            }
        }
    }

    return 0;
}