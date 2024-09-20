#include "src/molecule.hpp"
#include <unordered_map>

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

void Molecule::add_atom(Atom a, Bond b) {
    atoms.push_back(a);
    bonds.push_back(b);
}

int Molecule::cadeia_n(string n) {
	unordered_map<string, int> prefix;
	prefix["met"] = 1;
	prefix["et"] = 2;
	prefix["prop"] = 3;
	prefix["but"] = 4;
	prefix["pent"] = 5;
	prefix["hex"] = 6;
	prefix["hept"] = 7;
	prefix["oct"] = 8;
	prefix["non"] = 9;
	prefix["dec"] = 10;

	return prefix[n];
}

void Molecule::add_line(int begin, int n) {
		Bond b{};

		for (int i=0; i<n-1; i++) {
			Bond b{};
			b.add(begin + i + 1, 1);
			b.add(begin + i - 1, 1);
			add_atom(Atom::carbon(), b);
		}
		Bond b2{};
		b2.add(begin + n-1-1, 1);
		add_atom(Atom::carbon(), b2);
}
void Molecule::add_cadeia_principal(string prefixo) {
		int n = cadeia_n(prefixo);

		add_line(0, n);
}

void Molecule::add_ramificacao(int pos, string prefixo) {
	int n = cadeia_n(prefixo);
	//bonds[pos-1].add(atoms.size(), 1);
	add_line(pos-1, n);
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

