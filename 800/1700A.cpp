#include <iostream>

int test()
{

    int n, m;
    std::cin >> n >> m;

    unsigned long long cost = 0;

    for (int i = 0; i < m; i++)
    {
        cost += i + 1;
        // std::cout << "for (1," << i + 1 << "): " << cost << "\n";
    }

    for (int i = 1; i < n; i++)
    {
        cost += m * (i + 1);
        // std::cout << "for (" << i + 1 << "," << m << "): " << cost << "\n";
    }

    std::cout << cost << "\n";
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