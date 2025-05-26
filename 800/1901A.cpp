#include <iostream>

int test()
{

    int n, k;
    std::cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int max = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if ((a[i + 1] - a[i]) > max)
        {
            max = a[i + 1] - a[i];
        }
    }

    if (((k - a[n - 1]) * 2) > max)
    {
        max = (k - a[n - 1]) * 2;
    }

    if (a[0] > max)
    {
        max = a[0];
    }
    std::cout << max << "\n";
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