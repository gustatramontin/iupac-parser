
help:
	@echo "grammar: generate grammar"
mol:
	g++ test/molecule.cpp src/molecule.cpp -I. -o build/molecule
	./build/molecule
grammar:
	antlr4 -Dlanguage=Cpp Mol.g4 -o src/parser
