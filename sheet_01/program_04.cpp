#include <iostream>
#include <string>
int main()
{
    //guanin ’G’/’g’, adenin ’A’/’a’, cytosin ’C’/’c’, and thymin ’T’/’t
    std::string dna;
    std::cout << "Type in your dna string: \n";
    std::cin >> dna;

    int g = 0,
        a = 0, c = 0, t = 0, G = 0,
        A = 0, C = 0, T = 0;

    // this ”range−for” loop iterates the string ’dna’
    for (char base : dna)
    {
        switch (base)
        {
        case 'G':
            G++;
            break;
        case 'g':
            g++;
            break;
        case 'A':
            A++;
            break;
        case 'a':
            a++;
            break;
        case 'C':
            C++;
            break;
        case 'c':
            c++;
            break;
        case 'T':
            T++;
            break;
        case 't':
            t++;
            break;

        default:
            break;
        }
    }

    std::cout << "Your sequence contains:\n";
    std::cout << a + A << " times A, " << a << " lowercase " << A << " uppercase\n";
    std::cout << c + C << " times C, " << c << " lowercase " << C << " uppercase\n";
    std::cout << g + G << " times G, " << g << " lowercase " << G << " uppercase\n";
    std::cout << t + T << " times T, " << t << " lowercase " << T << " uppercase\n";
    return 0;
}