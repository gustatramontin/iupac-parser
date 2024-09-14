
help:
	@echo "grammar: generate grammar"
grammar:
	antlr4 -Dlanguage=Cpp Mol.g4 -o src/parser
