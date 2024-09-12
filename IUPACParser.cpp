
// Generated from IUPAC.g4 by ANTLR 4.13.2


#include "IUPACListener.h"

#include "IUPACParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct IUPACParserStaticData final {
  IUPACParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  IUPACParserStaticData(const IUPACParserStaticData&) = delete;
  IUPACParserStaticData(IUPACParserStaticData&&) = delete;
  IUPACParserStaticData& operator=(const IUPACParserStaticData&) = delete;
  IUPACParserStaticData& operator=(IUPACParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iupacParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<IUPACParserStaticData> iupacParserStaticData = nullptr;

void iupacParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iupacParserStaticData != nullptr) {
    return;
  }
#else
  assert(iupacParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<IUPACParserStaticData>(
    std::vector<std::string>{
      "molecula", "cadeia", "ligacao", "tipo", "ramificacao", "numero", 
      "pos"
    },
    std::vector<std::string>{
      "", "'-'", "'il'", "'di'", "'tri'", "'tetra'", "','", "'met'", "'et'", 
      "'prop'", "'but'", "'pent'", "'hex'", "'hept'", "'oct'", "'non'", 
      "'dec'", "'an'", "'en'", "'in'", "'o'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "C1", "C2", "C3", "C4", "C5", "C6", "C7", 
      "C8", "C9", "C10", "SIMPLES", "DUPLA", "TRIPLA", "HIDROCARBONETO", 
      "INT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,57,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	5,0,16,8,0,10,0,12,0,19,9,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,3,2,30,
  	8,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,3,4,39,8,4,1,4,1,4,1,4,3,4,44,8,4,1,5,
  	1,5,1,6,1,6,5,6,50,8,6,10,6,12,6,53,9,6,1,6,1,6,1,6,0,0,7,0,2,4,6,8,10,
  	12,0,3,1,0,7,16,1,0,17,19,1,0,3,5,54,0,17,1,0,0,0,2,24,1,0,0,0,4,26,1,
  	0,0,0,6,33,1,0,0,0,8,35,1,0,0,0,10,45,1,0,0,0,12,51,1,0,0,0,14,16,3,8,
  	4,0,15,14,1,0,0,0,16,19,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,20,1,0,
  	0,0,19,17,1,0,0,0,20,21,3,2,1,0,21,22,3,4,2,0,22,23,3,6,3,0,23,1,1,0,
  	0,0,24,25,7,0,0,0,25,3,1,0,0,0,26,27,3,12,6,0,27,29,5,1,0,0,28,30,3,10,
  	5,0,29,28,1,0,0,0,29,30,1,0,0,0,30,31,1,0,0,0,31,32,7,1,0,0,32,5,1,0,
  	0,0,33,34,5,20,0,0,34,7,1,0,0,0,35,36,3,12,6,0,36,38,5,1,0,0,37,39,3,
  	10,5,0,38,37,1,0,0,0,38,39,1,0,0,0,39,40,1,0,0,0,40,41,3,2,1,0,41,43,
  	5,2,0,0,42,44,5,1,0,0,43,42,1,0,0,0,43,44,1,0,0,0,44,9,1,0,0,0,45,46,
  	7,2,0,0,46,11,1,0,0,0,47,48,5,21,0,0,48,50,5,6,0,0,49,47,1,0,0,0,50,53,
  	1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,
  	5,21,0,0,55,13,1,0,0,0,5,17,29,38,43,51
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iupacParserStaticData = std::move(staticData);
}

}

IUPACParser::IUPACParser(TokenStream *input) : IUPACParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

IUPACParser::IUPACParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  IUPACParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *iupacParserStaticData->atn, iupacParserStaticData->decisionToDFA, iupacParserStaticData->sharedContextCache, options);
}

IUPACParser::~IUPACParser() {
  delete _interpreter;
}

const atn::ATN& IUPACParser::getATN() const {
  return *iupacParserStaticData->atn;
}

std::string IUPACParser::getGrammarFileName() const {
  return "IUPAC.g4";
}

const std::vector<std::string>& IUPACParser::getRuleNames() const {
  return iupacParserStaticData->ruleNames;
}

const dfa::Vocabulary& IUPACParser::getVocabulary() const {
  return iupacParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView IUPACParser::getSerializedATN() const {
  return iupacParserStaticData->serializedATN;
}


//----------------- MoleculaContext ------------------------------------------------------------------

IUPACParser::MoleculaContext::MoleculaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IUPACParser::CadeiaContext* IUPACParser::MoleculaContext::cadeia() {
  return getRuleContext<IUPACParser::CadeiaContext>(0);
}

IUPACParser::LigacaoContext* IUPACParser::MoleculaContext::ligacao() {
  return getRuleContext<IUPACParser::LigacaoContext>(0);
}

IUPACParser::TipoContext* IUPACParser::MoleculaContext::tipo() {
  return getRuleContext<IUPACParser::TipoContext>(0);
}

std::vector<IUPACParser::RamificacaoContext *> IUPACParser::MoleculaContext::ramificacao() {
  return getRuleContexts<IUPACParser::RamificacaoContext>();
}

IUPACParser::RamificacaoContext* IUPACParser::MoleculaContext::ramificacao(size_t i) {
  return getRuleContext<IUPACParser::RamificacaoContext>(i);
}


size_t IUPACParser::MoleculaContext::getRuleIndex() const {
  return IUPACParser::RuleMolecula;
}

void IUPACParser::MoleculaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMolecula(this);
}

void IUPACParser::MoleculaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMolecula(this);
}

IUPACParser::MoleculaContext* IUPACParser::molecula() {
  MoleculaContext *_localctx = _tracker.createInstance<MoleculaContext>(_ctx, getState());
  enterRule(_localctx, 0, IUPACParser::RuleMolecula);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IUPACParser::INT) {
      setState(14);
      ramificacao();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
    cadeia();
    setState(21);
    ligacao();
    setState(22);
    tipo();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CadeiaContext ------------------------------------------------------------------

IUPACParser::CadeiaContext::CadeiaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IUPACParser::CadeiaContext::C1() {
  return getToken(IUPACParser::C1, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C2() {
  return getToken(IUPACParser::C2, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C3() {
  return getToken(IUPACParser::C3, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C4() {
  return getToken(IUPACParser::C4, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C5() {
  return getToken(IUPACParser::C5, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C6() {
  return getToken(IUPACParser::C6, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C7() {
  return getToken(IUPACParser::C7, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C8() {
  return getToken(IUPACParser::C8, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C9() {
  return getToken(IUPACParser::C9, 0);
}

tree::TerminalNode* IUPACParser::CadeiaContext::C10() {
  return getToken(IUPACParser::C10, 0);
}


size_t IUPACParser::CadeiaContext::getRuleIndex() const {
  return IUPACParser::RuleCadeia;
}

void IUPACParser::CadeiaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCadeia(this);
}

void IUPACParser::CadeiaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCadeia(this);
}

IUPACParser::CadeiaContext* IUPACParser::cadeia() {
  CadeiaContext *_localctx = _tracker.createInstance<CadeiaContext>(_ctx, getState());
  enterRule(_localctx, 2, IUPACParser::RuleCadeia);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 130944) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LigacaoContext ------------------------------------------------------------------

IUPACParser::LigacaoContext::LigacaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IUPACParser::PosContext* IUPACParser::LigacaoContext::pos() {
  return getRuleContext<IUPACParser::PosContext>(0);
}

tree::TerminalNode* IUPACParser::LigacaoContext::SIMPLES() {
  return getToken(IUPACParser::SIMPLES, 0);
}

tree::TerminalNode* IUPACParser::LigacaoContext::DUPLA() {
  return getToken(IUPACParser::DUPLA, 0);
}

tree::TerminalNode* IUPACParser::LigacaoContext::TRIPLA() {
  return getToken(IUPACParser::TRIPLA, 0);
}

IUPACParser::NumeroContext* IUPACParser::LigacaoContext::numero() {
  return getRuleContext<IUPACParser::NumeroContext>(0);
}


size_t IUPACParser::LigacaoContext::getRuleIndex() const {
  return IUPACParser::RuleLigacao;
}

void IUPACParser::LigacaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLigacao(this);
}

void IUPACParser::LigacaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLigacao(this);
}

IUPACParser::LigacaoContext* IUPACParser::ligacao() {
  LigacaoContext *_localctx = _tracker.createInstance<LigacaoContext>(_ctx, getState());
  enterRule(_localctx, 4, IUPACParser::RuleLigacao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    pos();
    setState(27);
    match(IUPACParser::T__0);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 56) != 0)) {
      setState(28);
      numero();
    }
    setState(31);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 917504) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TipoContext ------------------------------------------------------------------

IUPACParser::TipoContext::TipoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IUPACParser::TipoContext::HIDROCARBONETO() {
  return getToken(IUPACParser::HIDROCARBONETO, 0);
}


size_t IUPACParser::TipoContext::getRuleIndex() const {
  return IUPACParser::RuleTipo;
}

void IUPACParser::TipoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTipo(this);
}

void IUPACParser::TipoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTipo(this);
}

IUPACParser::TipoContext* IUPACParser::tipo() {
  TipoContext *_localctx = _tracker.createInstance<TipoContext>(_ctx, getState());
  enterRule(_localctx, 6, IUPACParser::RuleTipo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(IUPACParser::HIDROCARBONETO);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RamificacaoContext ------------------------------------------------------------------

IUPACParser::RamificacaoContext::RamificacaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IUPACParser::PosContext* IUPACParser::RamificacaoContext::pos() {
  return getRuleContext<IUPACParser::PosContext>(0);
}

IUPACParser::CadeiaContext* IUPACParser::RamificacaoContext::cadeia() {
  return getRuleContext<IUPACParser::CadeiaContext>(0);
}

IUPACParser::NumeroContext* IUPACParser::RamificacaoContext::numero() {
  return getRuleContext<IUPACParser::NumeroContext>(0);
}


size_t IUPACParser::RamificacaoContext::getRuleIndex() const {
  return IUPACParser::RuleRamificacao;
}

void IUPACParser::RamificacaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRamificacao(this);
}

void IUPACParser::RamificacaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRamificacao(this);
}

IUPACParser::RamificacaoContext* IUPACParser::ramificacao() {
  RamificacaoContext *_localctx = _tracker.createInstance<RamificacaoContext>(_ctx, getState());
  enterRule(_localctx, 8, IUPACParser::RuleRamificacao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    pos();
    setState(36);
    match(IUPACParser::T__0);
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 56) != 0)) {
      setState(37);
      numero();
    }
    setState(40);
    cadeia();
    setState(41);
    match(IUPACParser::T__1);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IUPACParser::T__0) {
      setState(42);
      match(IUPACParser::T__0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumeroContext ------------------------------------------------------------------

IUPACParser::NumeroContext::NumeroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IUPACParser::NumeroContext::getRuleIndex() const {
  return IUPACParser::RuleNumero;
}

void IUPACParser::NumeroContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumero(this);
}

void IUPACParser::NumeroContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumero(this);
}

IUPACParser::NumeroContext* IUPACParser::numero() {
  NumeroContext *_localctx = _tracker.createInstance<NumeroContext>(_ctx, getState());
  enterRule(_localctx, 10, IUPACParser::RuleNumero);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 56) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PosContext ------------------------------------------------------------------

IUPACParser::PosContext::PosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IUPACParser::PosContext::INT() {
  return getTokens(IUPACParser::INT);
}

tree::TerminalNode* IUPACParser::PosContext::INT(size_t i) {
  return getToken(IUPACParser::INT, i);
}


size_t IUPACParser::PosContext::getRuleIndex() const {
  return IUPACParser::RulePos;
}

void IUPACParser::PosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPos(this);
}

void IUPACParser::PosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IUPACListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPos(this);
}

IUPACParser::PosContext* IUPACParser::pos() {
  PosContext *_localctx = _tracker.createInstance<PosContext>(_ctx, getState());
  enterRule(_localctx, 12, IUPACParser::RulePos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(51);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(47);
        match(IUPACParser::INT);
        setState(48);
        match(IUPACParser::T__5); 
      }
      setState(53);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(54);
    match(IUPACParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void IUPACParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iupacParserInitialize();
#else
  ::antlr4::internal::call_once(iupacParserOnceFlag, iupacParserInitialize);
#endif
}
