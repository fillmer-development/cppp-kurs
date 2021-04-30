#include <cmath>
#include <iostream>
int main()
{
    const long double from = 0.0;
    const long double to = 1.0;
    long double integral_val = 0.0;
    long double x = from;
    const size_t N = 1000000;
    const long double step_width = std::abs(from - to) / static_cast<long double>(N);
    for (size_t n = 0; n < N; ++n)
    {
        integral_val += (2 * sqrt(x));
        x += step_width;
    }
    integral_val /= N;
    std::cout << integral_val << "\n";
    return 0;
}