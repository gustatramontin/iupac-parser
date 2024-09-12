
// Generated from IUPAC.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "IUPACParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by IUPACParser.
 */
class  IUPACListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMolecula(IUPACParser::MoleculaContext *ctx) = 0;
  virtual void exitMolecula(IUPACParser::MoleculaContext *ctx) = 0;

  virtual void enterCadeia(IUPACParser::CadeiaContext *ctx) = 0;
  virtual void exitCadeia(IUPACParser::CadeiaContext *ctx) = 0;

  virtual void enterLigacao(IUPACParser::LigacaoContext *ctx) = 0;
  virtual void exitLigacao(IUPACParser::LigacaoContext *ctx) = 0;

  virtual void enterTipo(IUPACParser::TipoContext *ctx) = 0;
  virtual void exitTipo(IUPACParser::TipoContext *ctx) = 0;

  virtual void enterRamificacao(IUPACParser::RamificacaoContext *ctx) = 0;
  virtual void exitRamificacao(IUPACParser::RamificacaoContext *ctx) = 0;

  virtual void enterNumero(IUPACParser::NumeroContext *ctx) = 0;
  virtual void exitNumero(IUPACParser::NumeroContext *ctx) = 0;

  virtual void enterPos(IUPACParser::PosContext *ctx) = 0;
  virtual void exitPos(IUPACParser::PosContext *ctx) = 0;


};

