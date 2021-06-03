
#include <iostream>

template <typename A, typename B, typename C>
struct triple
{
	A a;
	B b;
	C c;

	triple(A a, B b, C c) : a(a), b(b), c(c) {}

	friend std::ostream &operator<<(std::ostream &os, const triple &t)
	{
		os << t.a << ", " << t.b << ", " << t.c << "\n";
	}
};

int main(int argc, char const *argv[])
{
	triple<int, char, float> t = triple<int, char, float>(1, 'a', 1.2);
	std::cout << t;
	return 0;
}
