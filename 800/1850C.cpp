#include <iostream>

int test(int grid);

int main()
{
    int grid = 8;

    int test_cases = 0;

    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {

        test(grid);
    }

    return 0;
}

int test(int grid)
{

    char paper[grid][grid + 1];

    for (int i = 0; i < grid; i++)
    {

        std::cin >> paper[i];
    }

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (paper[i][j] != '.' && paper[i][j] != '\n')
            {
                std::cout << paper[i][j];
            }
        }
    }

    std::cout << "\n";
    return 0;
}