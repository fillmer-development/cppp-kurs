#include <iostream>
#include <string>
int main()
{
    //guanin ’G’/’g’, adenin ’A’/’a’, cytosin ’C’/’c’, and thymin ’T’/’t

    const std::string dna = "AGTcccaaGTCAGACAATGAAtataAATCG";

    int g = 0, a = 0, c = 0, t = 0;

    // this ”range−for” loop iterates the string ’dna’
    for (char base : dna)
    {
        switch (base)
        {
        case 'G':
        case 'g':
            g++;
            break;
        case 'A':
        case 'a':
            a++;
            break;
        case 'C':
        case 'c':
            c++;
            break;
        case 'T':
        case 't':
            t++;
            break;

        default:
            break;
        }
    }

    std::cout << "Your sequence contains:\n";
    std::cout << a << " times A\n";
    std::cout << c << " times C\n";
    std::cout << g << " times G\n";
    std::cout << t << " times T\n";
    return 0;
}