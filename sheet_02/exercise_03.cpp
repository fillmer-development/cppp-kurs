#include <map>
#include <string>
#include <iostream>

using simap = std::map<std::string, int>;
using simap_item = std::pair<std::string, int>;

void print_simap(simap map)
{

    for (simap_item item : map)
    {
        std::cout << item.first;
        std::cout << " ";
        std::cout << item.second;
        std::cout << '\n';
    }
}

int main(int argc, char const *argv[])
{
    simap mymap;

    mymap.insert(simap_item("Peter", 40));
    mymap.insert(simap_item("Brian", 4));
    mymap.insert(simap_item("Stewie", 1));
    mymap.insert(simap_item("Chris", 15));
    mymap.insert(simap_item("Meg", 14));

    print_simap(mymap);
    std::cout << "\n------------\n";

    mymap.insert(simap_item("Lois", 41));
    print_simap(mymap);

    return 0;
}
