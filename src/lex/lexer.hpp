#ifndef LEXER_HPP
#define LEXER_HPP

#include "token.hpp"
#include <string>
#include <vector>

namespace tundra {
namespace lex {

    using TokenList = std::vector<Token>;

    class Lexer {
    public:
        Lexer(std::string source);
        TokenList Scan();

    private:
        bool AtEnd();
        void ScanToken();
        char Advance();
        void AddToken(TokenType token_type);

        std::string source_;
        TokenList tokens_;

        unsigned start_idx_ = 0;
        unsigned current_idx_ = 0;
        unsigned current_line_ = 1;
    };

}
} // namespace tundra
#endif // LEXER_HPP
