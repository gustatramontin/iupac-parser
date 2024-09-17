#include <iostream>

#include "antlr4-runtime.h"
#include "src/parser/MolLexer.h"
#include "src/parser/MolParser.h"
#include "src/parser/MolListener.h"

using namespace std;
using namespace antlr4;

class  MyListener : public MolListener {
public:

  virtual void enterMolecula(MolParser::MoleculaContext * ctx) override {}
  virtual void exitMolecula(MolParser::MoleculaContext * ctx) override { }

  virtual void enterCadeia_principal(MolParser::Cadeia_principalContext * ctx) override { 
        cout << ctx->PREFIXO()->getText() << "\n";
    }
  virtual void exitCadeia_principal(MolParser::Cadeia_principalContext * ctx) override { }

  virtual void enterRamificacao(MolParser::RamificacaoContext * ctx) override { }
  virtual void exitRamificacao(MolParser::RamificacaoContext * ctx) override { }

  virtual void enterInsaturacao(MolParser::InsaturacaoContext * ctx) override { }
  virtual void exitInsaturacao(MolParser::InsaturacaoContext * ctx) override { }

  virtual void enterGrupo_funcional(MolParser::Grupo_funcionalContext * ctx) override { }
  virtual void exitGrupo_funcional(MolParser::Grupo_funcionalContext * ctx) override { }

  virtual void enterNumero(MolParser::NumeroContext * ctx) override { }
  virtual void exitNumero(MolParser::NumeroContext * ctx) override { }

  virtual void enterPos(MolParser::PosContext * ctx) override { }
  virtual void exitPos(MolParser::PosContext * ctx) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * ctx) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * ctx) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  MolLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  MolParser parser(&tokens);

  tree::ParseTree *tree = parser.molecula();
  MyListener listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return 0;
}
