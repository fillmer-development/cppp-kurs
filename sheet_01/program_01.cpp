#include <iostream>

int main(int argc, char const *argv[])
{
    int input;

    std::cout << "Please type your number: ";
    std::cin >> input;

    if (input < 0)
    {
        std::cout << "Your number is smaller than Zero.";
    }
    else if (input > 100)
    {
        std::cout << "Your number is greater than 100.";
    }
    else
    {
        std::cout << "Your number is between Zero and 100.";
    }

    return 0;
}
