#include <iostream>

int test()
{

    int n = 0;
    std::cin >> n;

    int a[n];

    int first = -1;
    int last = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];

        if (a[i] == 1)
        {
            count++;
            last = i + 1;
            if (first == -1)
            {
                first = i;
            }
        }
    }

    std::cout << last - first - count << "\n";
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