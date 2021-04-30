#include <iostream>

int main(int argc, char const *argv[])
{
    int input;

    std::cout << "Please type your number: ";
    std::cin >> input;

    if (input > 0)
    {
        std::cout << "Your number is greater than Zero";

        if (input % 4 == 0)
        {
            std::cout << " and divisible by 4";

            if (input % 3 == 0)
            {
                std::cout << " and also by 3";
            }
        }
        std::cout << ".\n";
    }

    return 0;
}
