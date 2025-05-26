#include <iostream>

int test()
{
    int n = 0;
    std::cin >> n;

    if ((n - 1) % 3 == 0 || n == 1)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }

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