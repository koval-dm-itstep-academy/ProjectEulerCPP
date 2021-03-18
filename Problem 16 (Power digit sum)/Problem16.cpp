#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

int solve()
{
    int sum = 0;
    std::string str1 = std::to_string(pow(2, 1000));
    for (size_t i = 0; i < str1.length(); i++)
    {
        std::stringstream value;
        value << str1[i];

        int ptr;
        value >> ptr;

        sum += ptr;
    }

    return sum;
}

int main()
{
    std::cout << solve() << "\n";
}