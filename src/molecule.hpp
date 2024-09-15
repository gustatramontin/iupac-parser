
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
	void addAtom(Atom a, Bond b);

	void print();
};

