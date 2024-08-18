#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "token_type.hpp"

#include <string>

namespace tundra {
namespace lex {

    class Token {
    public:
        Token(const std::string& lexeme, TokenType token_type, unsigned line);

    private:
        std::string lexeme_;
        TokenType token_type_;
        unsigned line_;
    };

}
} // namespace tundra

#endif // TOKEN_H
