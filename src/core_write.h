#ifndef corewrite_h
#define corewrite_h


std::string FormatScript(const CScript& script);
std::string ScriptToAsmStr(const CScript& script, const bool fAttemptSighashDecode);
std::string EncodeHexTx(const CTransaction& tx, const int serialFlags);
void ScriptPubKeyToUniv(const CScript& scriptPubKey,
                        UniValue& out, bool fIncludeHex);
void TxToUniv(const CTransaction& tx, const uint256& hashBlock, UniValue& entry);

#endif