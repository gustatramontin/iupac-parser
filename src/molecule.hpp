
#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef unsigned int uint;

class Atom {
public:
	string name;

	Atom(string name);
	static Atom carbon();
};


class Bond {
public:
        vector<int> atoms;
        vector<int> insaturations;
	Bond() {}

        Bond & add(int a, int i);
        string show();
};

class Molecule {
public:
	string name;
	vector<Atom> atoms;
	vector<Bond> bonds;

	Molecule(string name);
	void add_atom(Atom a, Bond b);
	int cadeia_n(string n);
	void add_line(int begin, int n);
	void add_cadeia_principal(string prefixo);
	void add_ramificacao(int pos, string prefixo);

	void print();
};

