#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Please provide exactly three arguments\n";
		return 1;
	}
	const double v1 = std::stod(argv[2]);
	const std::string op = argv[3];
	const double v2 = std::stod(argv[4]);

	switch (op)
	{
	case '+':
		std::cout << "result: " << v1 + v2 << "\n";
		break;

	case "-":
		std::cout << "result: " << v1 - v2 << "\n";
		break;

	case "/":
		std::cout << "result: " << v1 / v2 << "\n";
		break;

	case "*":
		std::cout << "result: " << v1 * v2 << "\n";
		break;

		return 0;
	}
