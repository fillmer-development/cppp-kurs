#include <cmath>
#include <iostream>
#include <vector>

// a)
unsigned fibonacci_rec(unsigned n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
        return 1;

    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

//b
unsigned fibonacci_nonrec(unsigned n)
{
    int fib_n, fn_1 = 1, fn_2 = 1;

    if (n <= 1)
        return 0;

    if (n == 2)
        return 1;

    for (int i = 3; i < n; i++)
    {
        fib_n = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fib_n;
    }

    return fib_n;
}

int main(int argc, char const *argv[])
{
    std::cout << fibonacci_rec(50) << '\n';
    std::cout << fibonacci_nonrec(50) << '\n';
    return 0;
}

// c)

// Both versions yield correct results. The recursive version is slower because for any recursion layer there are called two more functions, so there is an exponential growth.