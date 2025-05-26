#include <iostream>

int test()
{

    char lines[2][3];
    int steps = -1;

    for (int i = 0; i < 2; i++)
    {
        std::cin >> lines[i];
    }
    bool seen[26] = {false};

    // Mark which letters appear
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            char ch = lines[i][j];
            if (ch >= 'a' && ch <= 'z')
            {
                seen[ch - 'a'] = true;
            }
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (seen[i])
            steps++;
    }
    std::cout << steps << "\n";
    return 0;
}

int main()
{

    int test_cases;
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        test();
    }
    return 0;
}