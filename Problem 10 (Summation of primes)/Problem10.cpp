#include <iostream>
using namespace std;

int solve()
{
	int sum = 0;
	int checker;

	bool prime = true;

	for (int num = 1; num < 2000000; num++)
	{
		if (num <= 1)
			prime = false;


		else if (num % 2 == 0)
			prime = false;

		else
		{
			for (checker = 3; checker < num/2; checker += 2)
			{
				if (num % checker == 0)
				{
					prime = false;
				}
			}
		}

		if (prime == true)
		{
			sum += num;
		}
	}

	return sum;
}

int main()
{
	cout << solve() << "\n";
}