#include <iostream>
#include "src/lib.hpp"

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open(argv[1]);

    char molecule_name[256];
    stream.getline(molecule_name, 256);
    string name(molecule_name);

    Molecule molecula = parse(name);
    molecula.print();
    return 0;
}
