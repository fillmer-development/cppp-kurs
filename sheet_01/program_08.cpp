#include <cmath>
#include <iostream>
int main()
{
    int sum = 0;
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            sum += i;
        }
    }

    std::cout << "calculated: " << sum << "\n";
}