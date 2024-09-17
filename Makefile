
parser_files := $(wildcard src/parser/*.cpp)

help:
	@echo "grammar: generate grammar"
mol:
	g++ test/molecule.cpp src/molecule.cpp -I.  -o build/molecule
	./build/molecule
parser:
	 g++ src/main.cpp src/molecule.cpp $(parser_files)  -I./ -I./antlr/include/antlr4-runtime -Lantlr/lib64 -lantlr4-runtime -o build/molecule
	 LD_LIBRARY_PATH=antlr/lib64 ./build/molecule test/molecula-1
grammar:
	antlr4 -Dlanguage=Cpp Mol.g4 -o src/parser
