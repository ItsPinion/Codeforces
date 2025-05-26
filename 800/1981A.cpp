#include <iostream>

int test()
{

    int l, r;
    std::cin >> l >> r;

    int maxMultiples = 0;
    int bestNumber = 0;

    for (int p = l; p <= r; ++p)
    {
        int count = r / p; // number of multiples of p in range 1 to N
        if (count > maxMultiples)
        {
            maxMultiples = count;
            bestNumber = p;
        }
    }
    int x = bestNumber;

    int i = 2;
    int steps = 0;
    while (x != 1 && i < (r / 2) + 1)
    {
        std::cout << "x: " << x << ", i: " << i << ", steps: " << steps << "\n";
        if (x % i == 0)
        {
            x /= i;
            steps++;
        }
        else
        {
            i++;
        }
    }

    std::cout << steps << "\n";

    return 0;
}
int main()
{

    int test_cases = 0;
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        test();
    }
}