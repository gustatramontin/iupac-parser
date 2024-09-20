#include "src/molecule.hpp"

int main() {

	Molecule mol("4,3-etil-but-2-enol");
        mol.set_cadeia_principal("but");
        mol.set_grupo_funcional("ol");
        mol.add_substituente(4, "et");
        mol.add_substituente(3, "et");
        mol.add_insaturacao(2, "en");

        mol.print();


}
