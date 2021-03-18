#include <iostream>
bool even(int number) 
{
    if (number % 2 == 0)
        return true;
    return false;
}

__int64 collatzSequence()
{
    __int64 newCountStep = 0;
    __int64 mostCountStep = 0;
    __int64 number;
    __int64 mostNumber;
    for (int i = 999999; i > 1; i--)
    {
        number = i;
        while (1) 
        {
            if (even(number) == true) 
            {
                number /= 2;
                newCountStep++;
            }
            else 
            {
                number = 3 * number + 1;
                newCountStep++;
            }
            if (number == 1)
                break;
        }
        std::cout << i << " ";
        if (newCountStep > mostCountStep) 
        {
            mostCountStep = newCountStep;
            mostNumber = i;
        }
        newCountStep = 0;
    }
    return mostNumber;
}

int main()
{
    std::cout << collatzSequence();
}

