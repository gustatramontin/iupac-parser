
// Generated from IUPAC.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  IUPACLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, C1 = 7, 
    C2 = 8, C3 = 9, C4 = 10, C5 = 11, C6 = 12, C7 = 13, C8 = 14, C9 = 15, 
    C10 = 16, SIMPLES = 17, DUPLA = 18, TRIPLA = 19, HIDROCARBONETO = 20, 
    INT = 21
  };

  explicit IUPACLexer(antlr4::CharStream *input);

  ~IUPACLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

