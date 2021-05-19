#include <cmath> // header is needed for sin() and cos()
#include <vector>
void pol2cart(double r, double phi, std::vector<double> &result)
{
	double x = r ∗ cos(phi);
	double y = r ∗ sin(phi);
	*result.push_back(x);
	*result.push_back(y);
}