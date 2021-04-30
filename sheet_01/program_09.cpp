#include <cmath>
#include <iostream>

int main()
{
    std::cout << "figure 1: \n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }

    std::cout << "\n\nfigure 2: \n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n\nfigure 3: \n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9 || i == j)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}