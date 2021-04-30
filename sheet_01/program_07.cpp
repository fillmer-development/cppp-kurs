#include <cmath>
#include <iostream>
int main()
{
    int sum = 0;
    for (size_t k = 1; k < 100; k++)
    {
        sum += k;
    }

    std::cout << "calculated: " << sum << "\n";
}