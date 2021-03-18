#include <iostream>

bool isPrime(int a)
{
    for (int i = 2; i <= a / 2; ++i)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve()
{
    int count = 2;
    for (int i = 5; ; i = i + 2)
    {
        if (isPrime(i))
        {
            count++;
        }
        if (count == 10001)
        {
            return i;
        }
    }
}

int main() {
    std::cout << solve() << "\n";
}