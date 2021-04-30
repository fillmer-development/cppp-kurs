#include <iostream>
int main()
{
    float user_input = 0.0f;
    std::cout << "Please type in a whole number: ";
    std::cin >> user_input;
    std::cout << "Your value: "
              << user_input << '\n';
    return 0;
}