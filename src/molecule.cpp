#include "src/molecule.hpp"

Atom::Atom(string name): name{name} {}

Atom Atom::carbon() {
        Atom c("Carbon");
        return c;
}

Bond & Bond::add(int a, int i) {
    atoms.push_back(a);
    insaturations.push_back(i);
    return *this;
}
string Bond::show() {
        string res = "";
        for (int i=0; i<atoms.size(); i++) {
        res += "(";
        res += to_string(atoms[i]) + ", " + to_string(insaturations[i]);
        res += ") ";
        }

        return res;
}

Molecule::Molecule(string name): name{name} {}

void Molecule::addAtom(Atom a, Bond b) {
    atoms.push_back(a);
    bonds.push_back(b);
}

void Molecule::print() {
        for (auto a : atoms) {
                cout << a.name << " - ";
        }
        cout << "\n";
        for (auto b : bonds) {
                cout << b.show() << ", ";

        }
        cout << "\n";
}

