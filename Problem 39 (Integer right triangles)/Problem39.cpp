#include <ctime>
#include <iostream>

int solve() 
{
    int perimeter = 0, solution_number, max_solutions = 0, max_solution_perimeter = 3, third_side;

    for (int perimeter = 3; perimeter <= 1000; ++perimeter)
    {
        solution_number = 0;
        for (int first_side = 1; first_side < perimeter / 2; ++first_side) 
        {
            for (int second_side = 1; second_side < perimeter / 2; ++second_side)
            {
                third_side = perimeter - first_side - second_side;
                if (pow(first_side, 2) == pow(second_side, 2) + pow(third_side, 2) || pow(second_side, 2) == 
                    pow(first_side, 2) + pow(third_side, 2) || pow(third_side, 2) == pow(first_side, 2) + pow(second_side, 2))
                {
                    solution_number++;
                }
            }
        }
        solution_number /= 3;
        if (solution_number > max_solutions) {
            max_solutions = solution_number;
            max_solution_perimeter = perimeter;
        }
    }
    return max_solution_perimeter;
}

int main()
{
    std::cout << solve() << "\n";
}

