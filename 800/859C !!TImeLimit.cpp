#include <iostream>

int test()
{
    int size = 0;
    std::cin >> size;

    char strings[size + 1];

    for (int i = 0; i < size; i++)
    {
        std::cin >> strings[i];
    }

    for (char i = 0; i < size; i++)
    {
        for (char j = i + 1; j < size; j = j + 2)
        {
            if (strings[i] == strings[j])
            {
                std::cout << "NO\n";
                return 0;
            }
        }
    }

    std::cout << "YES\n";

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
    return 0;
}