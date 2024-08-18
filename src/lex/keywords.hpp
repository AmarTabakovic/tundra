#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include "token_type.hpp"

#include <unordered_map>

namespace tundra {
namespace lex {

using enum TokenType;

/**
 * @brief kReservedKeywords
 */
const static std::unordered_map<std::string, TokenType> kReservedKeywords{
    {"class", kClass},   {"if", kIf},         {"else", kElse},     {"fn", kFn},
    {"while", kWhile},   {"for", kFor},       {"in", kIn},         {"string", kString},
    {"return", kReturn}, {"let", kLet},       {"mut", kMut},       {"continue", kContinue},
    {"bool", kBool},     {"float", kFloat},   {"double", kDouble}, {"int", kInt},
    {"nil", kNil},       {"module", kModule}, {"import", kImport}, {"true", kTrue},
    {"false", kFalse},
};
}
} // namespace tundra

#endif // KEYWORDS_H
