#include <iostream>
#include <cmath>

int geSumOfSquares(int& sum2)
{
    for (size_t i = 1; i <= 100; i++)
    {
        sum2 += pow(i, 2);
    }

    return sum2;
}

int getSquareOfSum(int& sum)
{
    for (size_t i = 1; i <= 100; i++)
    {
        sum += i;
    }

    return sum = pow(sum, 2);
}

int getResult(int& sum, int& sum2)
{
    return (sum - sum2);
}

int main()
{
    int sum = 0;
    int sum2 = 0;

    std::cout << "The sum of the squares -> " << geSumOfSquares(sum2) << "\n";
    std::cout << "The square of the sum -> " << getSquareOfSum(sum) << "\n";

    std::cout << "Result -> " << getResult(sum, sum2) << "\n";
}