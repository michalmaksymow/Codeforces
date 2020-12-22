#include <iostream>
#include <string>


int main()
{
    int polyhedrons;
    std::cin >> polyhedrons;

    int faces{};
    std::string read;
    for (size_t i = 0; i < polyhedrons; i++)
    {
        std::cin >> read;
        if (read == "Tetrahedron")
            faces += 4;
        else if (read == "Cube")
            faces += 6;
        else if (read == "Octahedron")
            faces += 8;
        else if (read == "Dodecahedron")
            faces += 12;
        else
            faces += 20;
    }

    std::cout << faces << std::endl;

    return 0;
}