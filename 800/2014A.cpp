#include <iostream>

int test()
{
    int n, k;
    std::cin >> n >> k;

    int people[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> people[i];
    }

    int balance = 0;
    int helped = 0;

    for (int i = 0; i < n; i++)
    {
        if (people[i] >= k)
        {
            balance += people[i];
        }
        else if (people[i] == 0 && balance != 0)
        {
            helped++;
            balance--;
        }
    }

        std::cout << helped << "\n";

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