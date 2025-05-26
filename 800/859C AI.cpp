#include <iostream>
#include <unordered_map>
#include <string>

bool canBeAlternating(const std::string &s)
{
    std::unordered_map<char, int> parity;

    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        int current_parity = i % 2;

        if (parity.count(c))
        {
            if (parity[c] != current_parity)
                return false; // Character appears in both even and odd indices
        }
        else
        {
            parity[c] = current_parity;
        }
    }

    return true;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::string s;
        std::cin >> n >> s;

        if (canBeAlternating(s))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}
