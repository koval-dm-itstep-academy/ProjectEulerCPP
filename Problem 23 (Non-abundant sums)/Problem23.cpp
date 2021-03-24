#include <array>
#include <iostream>
#include <vector>

int sum(int n)
{
    int sum{ 1 };
    int i = 2;
    for (int j = n; i < j; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
            j = n / i;
            if (i == j)
                break;
            sum += j;
        }
    }
    return sum;
}

int solve()
{
    std::vector<int> a;
    a.reserve(7000);
    constexpr int max = 28123;
    for (int i{ 1 }; i <= max; ++i)
    {
        if (sum(i) > i)
            a.push_back(i);
    }

    std::array<bool, max> sums{};

    for (unsigned i{}; i < a.size(); ++i)
    {
        for (unsigned j{ i }; ; ++j)
        {
                int k = a[i] + a[j];
            if (k >= max)
                break;
            sums[k] = true;
        }
    }
    int sum{};
    for (int i{}; i < max; ++i)
        if (!sums[i])
            sum += i;

    return sum;
}

int main() {
    std::cout << solve() << "\n";
}