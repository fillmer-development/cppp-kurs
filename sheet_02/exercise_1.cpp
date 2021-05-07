#include <cmath>
#include <iostream>
#include <vector>

using dvec = std::vector<double>;

// a)

double euclidean_length(dvec v)
{
    double len = 0;

    for (double s : v)
    {
        len += (s * s);
    }

    return std::sqrt(len);
}

// b)
double scalar_prod(dvec a, dvec b)
{
    double prod = 0;

    if (!(a.size() == b.size()))
    {
        return 0;
    }

    for (int i = 0; i < a.size(); i++)
    {
        prod += a[i] * b[i];
    }

    return prod;
}

// c)
dvec normalize(dvec v)
{
    double len = euclidean_length(v);

    for (int i = 0; i < v.size(); i++)
    {
        v[i] /= len;
    }

    return v;
}

// d)
double euclidian_distance(dvec a, dvec b)
{
    double sum = 0;

    if (!(a.size() == b.size()))
    {
        return 0;
    }

    for (int i = 0; i < a.size(); i++)
    {
        sum += std::pow((a[i] - b[i]), 2);
    }

    return std::sqrt(sum);
}
