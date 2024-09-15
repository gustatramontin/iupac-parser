#include "src/molecule.hpp"

int main() {
	Atom c1 = Atom::carbon();
	Atom c2 = Atom::carbon();
	Atom c3 = Atom::carbon();

	Molecule metano("propane");
	Bond b1{};
	Bond b2{};
	Bond b3{};
        b1.add(1,1);
        b2.add(0,1).add(2,1);
        b3.add(1,1);
	metano.addAtom(c1, b1);
	metano.addAtom(c2, b2);
	metano.addAtom(c3, b3);

	metano.print();
}
