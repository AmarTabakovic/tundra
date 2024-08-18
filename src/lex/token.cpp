#include "token.hpp"

namespace tundra {
namespace lex {
    Token::Token(const std::string& lexeme, TokenType token_type, unsigned line)
        : lexeme_ { lexeme }
        , token_type_ { token_type }
        , line_ { line }
    {
    }

}
} // namespace tundra
