
// Generated from IUPAC.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "IUPACListener.h"


/**
 * This class provides an empty implementation of IUPACListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  IUPACBaseListener : public IUPACListener {
public:

  virtual void enterMolecula(IUPACParser::MoleculaContext * /*ctx*/) override { }
  virtual void exitMolecula(IUPACParser::MoleculaContext * /*ctx*/) override { }

  virtual void enterCadeia(IUPACParser::CadeiaContext * /*ctx*/) override { }
  virtual void exitCadeia(IUPACParser::CadeiaContext * /*ctx*/) override { }

  virtual void enterLigacao(IUPACParser::LigacaoContext * /*ctx*/) override { }
  virtual void exitLigacao(IUPACParser::LigacaoContext * /*ctx*/) override { }

  virtual void enterTipo(IUPACParser::TipoContext * /*ctx*/) override { }
  virtual void exitTipo(IUPACParser::TipoContext * /*ctx*/) override { }

  virtual void enterRamificacao(IUPACParser::RamificacaoContext * /*ctx*/) override { }
  virtual void exitRamificacao(IUPACParser::RamificacaoContext * /*ctx*/) override { }

  virtual void enterNumero(IUPACParser::NumeroContext * /*ctx*/) override { }
  virtual void exitNumero(IUPACParser::NumeroContext * /*ctx*/) override { }

  virtual void enterPos(IUPACParser::PosContext * /*ctx*/) override { }
  virtual void exitPos(IUPACParser::PosContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

