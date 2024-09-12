
// Generated from IUPAC.g4 by ANTLR 4.13.2


#include "IUPACLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct IUPACLexerStaticData final {
  IUPACLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  IUPACLexerStaticData(const IUPACLexerStaticData&) = delete;
  IUPACLexerStaticData(IUPACLexerStaticData&&) = delete;
  IUPACLexerStaticData& operator=(const IUPACLexerStaticData&) = delete;
  IUPACLexerStaticData& operator=(IUPACLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iupaclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<IUPACLexerStaticData> iupaclexerLexerStaticData = nullptr;

void iupaclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iupaclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(iupaclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<IUPACLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "C1", "C2", "C3", 
      "C4", "C5", "C6", "C7", "C8", "C9", "C10", "SIMPLES", "DUPLA", "TRIPLA", 
      "HIDROCARBONETO", "INT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,121,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,20,4,20,118,8,20,11,20,
  	12,20,119,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,1,0,1,1,0,
  	48,57,121,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,
  	0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,
  	1,43,1,0,0,0,3,45,1,0,0,0,5,48,1,0,0,0,7,51,1,0,0,0,9,55,1,0,0,0,11,61,
  	1,0,0,0,13,63,1,0,0,0,15,67,1,0,0,0,17,70,1,0,0,0,19,75,1,0,0,0,21,79,
  	1,0,0,0,23,84,1,0,0,0,25,88,1,0,0,0,27,93,1,0,0,0,29,97,1,0,0,0,31,101,
  	1,0,0,0,33,105,1,0,0,0,35,108,1,0,0,0,37,111,1,0,0,0,39,114,1,0,0,0,41,
  	117,1,0,0,0,43,44,5,45,0,0,44,2,1,0,0,0,45,46,5,105,0,0,46,47,5,108,0,
  	0,47,4,1,0,0,0,48,49,5,100,0,0,49,50,5,105,0,0,50,6,1,0,0,0,51,52,5,116,
  	0,0,52,53,5,114,0,0,53,54,5,105,0,0,54,8,1,0,0,0,55,56,5,116,0,0,56,57,
  	5,101,0,0,57,58,5,116,0,0,58,59,5,114,0,0,59,60,5,97,0,0,60,10,1,0,0,
  	0,61,62,5,44,0,0,62,12,1,0,0,0,63,64,5,109,0,0,64,65,5,101,0,0,65,66,
  	5,116,0,0,66,14,1,0,0,0,67,68,5,101,0,0,68,69,5,116,0,0,69,16,1,0,0,0,
  	70,71,5,112,0,0,71,72,5,114,0,0,72,73,5,111,0,0,73,74,5,112,0,0,74,18,
  	1,0,0,0,75,76,5,98,0,0,76,77,5,117,0,0,77,78,5,116,0,0,78,20,1,0,0,0,
  	79,80,5,112,0,0,80,81,5,101,0,0,81,82,5,110,0,0,82,83,5,116,0,0,83,22,
  	1,0,0,0,84,85,5,104,0,0,85,86,5,101,0,0,86,87,5,120,0,0,87,24,1,0,0,0,
  	88,89,5,104,0,0,89,90,5,101,0,0,90,91,5,112,0,0,91,92,5,116,0,0,92,26,
  	1,0,0,0,93,94,5,111,0,0,94,95,5,99,0,0,95,96,5,116,0,0,96,28,1,0,0,0,
  	97,98,5,110,0,0,98,99,5,111,0,0,99,100,5,110,0,0,100,30,1,0,0,0,101,102,
  	5,100,0,0,102,103,5,101,0,0,103,104,5,99,0,0,104,32,1,0,0,0,105,106,5,
  	97,0,0,106,107,5,110,0,0,107,34,1,0,0,0,108,109,5,101,0,0,109,110,5,110,
  	0,0,110,36,1,0,0,0,111,112,5,105,0,0,112,113,5,110,0,0,113,38,1,0,0,0,
  	114,115,5,111,0,0,115,40,1,0,0,0,116,118,7,0,0,0,117,116,1,0,0,0,118,
  	119,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,42,1,0,0,0,2,0,119,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iupaclexerLexerStaticData = std::move(staticData);
}

}

IUPACLexer::IUPACLexer(CharStream *input) : Lexer(input) {
  IUPACLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *iupaclexerLexerStaticData->atn, iupaclexerLexerStaticData->decisionToDFA, iupaclexerLexerStaticData->sharedContextCache);
}

IUPACLexer::~IUPACLexer() {
  delete _interpreter;
}

std::string IUPACLexer::getGrammarFileName() const {
  return "IUPAC.g4";
}

const std::vector<std::string>& IUPACLexer::getRuleNames() const {
  return iupaclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& IUPACLexer::getChannelNames() const {
  return iupaclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& IUPACLexer::getModeNames() const {
  return iupaclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& IUPACLexer::getVocabulary() const {
  return iupaclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView IUPACLexer::getSerializedATN() const {
  return iupaclexerLexerStaticData->serializedATN;
}

const atn::ATN& IUPACLexer::getATN() const {
  return *iupaclexerLexerStaticData->atn;
}




void IUPACLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iupaclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(iupaclexerLexerOnceFlag, iupaclexerLexerInitialize);
#endif
}
