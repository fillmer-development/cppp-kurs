#include <iostream>
#include <vector>
#include <algorithm>	// contains the for each algorithm and swap
#include <functional> // needed for part b)

template <typename T>
void bubble_sort(std::vector<T> &v)
{
	bool has_swapped;
	size_t n = v.size();
	do
	{
		has_swapped = false;
		for (size_t i = 0; i < n - 1; ++i)
		{
			if (v[i] > v[i + 1])
			{
				std::swap(v[i], v[i + 1]);
				has_swapped = true;
			}
		}
		// After each iteration the biggest element has_swapped to the end.
		// Therefore, we can shorten our loop after each iteration.
		--n;
		// If no swap has taken place, we are done.
	} while (has_swapped);
}

template <typename T>
void bubble_sort(std::vector<T> &v, std::function<bool(T, T)> predicate)
{
	bool has_swapped;
	size_t n = v.size();
	do
	{
		has_swapped = false;
		for (size_t i = 0; i < n - 1; ++i)
		{
			if (predicate(v[i], v[i + 1]))
			{
				std::swap(v[i], v[i + 1]);
				has_swapped = true;
			}
		}
		// After each iteration the biggest element has_swapped to the end.
		// Therefore, we can shorten our loop after each iteration.
		--n;
		// If no swap has taken place, we are done.
	} while (has_swapped);
}

int main()
{
	std::vector<double> v = {3.33, 9.33, 3.29};
	std::for_each(v.begin(), v.end(), [](double i)
								{ std::cout << i << " "; });
	std::cout << '\n';
	// Do the sorting!
	bubble_sort<double>(v);
	std::for_each(v.begin(), v.end(), [](double i)
								{ std::cout << i << " "; });
	std::cout << '\n';

	std::vector<std::string> v2 = {"A", "BBB", "CC", "DDDDD", "EE", "FFFFFFF", "G", "HHHH"};

	std::for_each(v2.begin(), v2.end(), [](std::string i)
								{ std::cout << i << " "; });
	std::cout << '\n';

	bubble_sort<std::string>(v2, [](const std::string &a, const std::string &b)
													 { return a.size() > b.size(); });

	std::for_each(v2.begin(), v2.end(), [](std::string i)
								{ std::cout << i << " "; });
	std::cout << '\n';
	return 0;
}