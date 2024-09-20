#include "src/molecule.hpp"
#include <unordered_map>

Atom::Atom(): name{""} {}
Atom::Atom(string name): name{name} {}

Atom Atom::carbon() {
        Atom c("C");
        return c;
}
Atom Atom::hidroxila() {
        Atom c("OH");
        return c;
}

CarbonSeries::CarbonSeries(): n{0}, pos{0} {}
CarbonSeries::CarbonSeries(int n, int pos): n{n}, pos{pos} {}

int CarbonSeries::inicio() {
    return pos;
}
int CarbonSeries::tamanho() {
    return n;
}

Insaturacao::Insaturacao(): pos{0}, tipo{0} {}
Insaturacao::Insaturacao(int pos, int tipo): pos{pos}, tipo{tipo} {}

Insaturacao Insaturacao::dupla(int pos) {
    Insaturacao i(pos, 2);
    return i;
}
Insaturacao Insaturacao::tripla(int pos) {
    Insaturacao i(pos, 3);
    return i;
}

string Insaturacao::name() {
    if (tipo == 2) return "dupla";
    else if (tipo == 3) return "tripla";
}

int Insaturacao::posicao() {
    return pos;
}

Molecule::Molecule(string name): name{name} {}

int Molecule::prefixo(string n) {
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


void Molecule::set_cadeia_principal(string prefix) {
    int n = prefixo(prefix);
    cadeia_principal = CarbonSeries(n);
}

void Molecule::add_substituente(int pos, string prefix) {
    int n = prefixo(prefix);

    CarbonSeries c(n, pos);
    substituentes.push_back(c);
}

void Molecule::add_insaturacao(int pos, string tipo) {
    Insaturacao i(0,0);
    if (tipo == "en")
        i = Insaturacao::dupla(pos);
    else if (tipo == "in")
        i = Insaturacao::tripla(pos);

    insaturacoes.push_back(i);
}

void Molecule::set_grupo_funcional(string grupo) {
    Atom grupo_fun;
    if (grupo == "o")
        grupo_fun = Atom::carbon();
    else if (grupo == "ol")
        grupo_fun = Atom::hidroxila();

    grupo_funcional = grupo_fun;

}


void Molecule::print() {
    cout << name << "\n";
    cout << "cadeia principal = " << cadeia_principal.tamanho() << "\n";

    cout << "substituentes" << "\n";
    for (CarbonSeries r : substituentes)
        cout << r.inicio() << " = " << r.tamanho() << "\n";

    cout << "insaturacaoes" << "\n";
    for (Insaturacao i : insaturacoes)
        cout << i.posicao()<< " = " << i.name() << "\n";
}

