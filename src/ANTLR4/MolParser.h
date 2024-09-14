
// Generated from Mol.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MolParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, C1 = 7, 
    C2 = 8, C3 = 9, C4 = 10, C5 = 11, C6 = 12, C7 = 13, C8 = 14, C9 = 15, 
    C10 = 16, SIMPLES = 17, DUPLA = 18, TRIPLA = 19, HIDROCARBONETO = 20, 
    INT = 21
  };

  enum {
    RuleMolecula = 0, RuleCadeia = 1, RuleLigacao = 2, RuleTipo = 3, RuleRamificacao = 4, 
    RuleNumero = 5, RulePos = 6
  };

  explicit MolParser(antlr4::TokenStream *input);

  MolParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MolParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MoleculaContext;
  class CadeiaContext;
  class LigacaoContext;
  class TipoContext;
  class RamificacaoContext;
  class NumeroContext;
  class PosContext; 

  class  MoleculaContext : public antlr4::ParserRuleContext {
  public:
    MoleculaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CadeiaContext *cadeia();
    LigacaoContext *ligacao();
    TipoContext *tipo();
    std::vector<RamificacaoContext *> ramificacao();
    RamificacaoContext* ramificacao(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MoleculaContext* molecula();

  class  CadeiaContext : public antlr4::ParserRuleContext {
  public:
    CadeiaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C1();
    antlr4::tree::TerminalNode *C2();
    antlr4::tree::TerminalNode *C3();
    antlr4::tree::TerminalNode *C4();
    antlr4::tree::TerminalNode *C5();
    antlr4::tree::TerminalNode *C6();
    antlr4::tree::TerminalNode *C7();
    antlr4::tree::TerminalNode *C8();
    antlr4::tree::TerminalNode *C9();
    antlr4::tree::TerminalNode *C10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CadeiaContext* cadeia();

  class  LigacaoContext : public antlr4::ParserRuleContext {
  public:
    LigacaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PosContext *pos();
    antlr4::tree::TerminalNode *SIMPLES();
    antlr4::tree::TerminalNode *DUPLA();
    antlr4::tree::TerminalNode *TRIPLA();
    NumeroContext *numero();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LigacaoContext* ligacao();

  class  TipoContext : public antlr4::ParserRuleContext {
  public:
    TipoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIDROCARBONETO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TipoContext* tipo();

  class  RamificacaoContext : public antlr4::ParserRuleContext {
  public:
    RamificacaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PosContext *pos();
    CadeiaContext *cadeia();
    NumeroContext *numero();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RamificacaoContext* ramificacao();

  class  NumeroContext : public antlr4::ParserRuleContext {
  public:
    NumeroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumeroContext* numero();

  class  PosContext : public antlr4::ParserRuleContext {
  public:
    PosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PosContext* pos();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

