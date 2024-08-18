#include "lexer.hpp"

#include <iostream>

namespace tundra {
namespace lex {
    Lexer::Lexer(std::string source)
        : source_(source)
    {
    }

    bool Lexer::AtEnd()
    {
        return current_idx_ >= source_.size();
    }

    char Lexer::Advance()
    {
        return source_[current_idx_++];
    }

    void Lexer::AddToken(TokenType token_type)
    {
        auto lexeme = source_.substr(start_idx_, current_idx_ - start_idx_);
        tokens_.emplace_back(lexeme, token_type, current_line_);
    }

    TokenList Lexer::Scan()
    {
        while (!AtEnd()) {
            start_idx_ = current_idx_;
            ScanToken();
        }

        tokens_.emplace_back("", TokenType::kEof, current_line_);
        return tokens_;
    }

    void Lexer::ScanToken()
    {
        char c = Advance();
        switch (c) {
        case '(':
            AddToken(TokenType::kLeftParenthesis);
            break;
        case ')':
            AddToken(TokenType::kRightParenthesis);
            break;
        case '[':
            AddToken(TokenType::kLeftBracket);
            break;
        case ']':
            AddToken(TokenType::kRightBracket);
            break;
        case '{':
            AddToken(TokenType::kLeftBrace);
            break;
        case '}':
            AddToken(TokenType::kRightBrace);
            break;
        case '.':
            AddToken(TokenType::kDot);
            break;
        case ',':
            AddToken(TokenType::kComma);
            break;
        case ';':
            AddToken(TokenType::kSemiColon);
            break;
        case ':':
            AddToken(TokenType::kColon);
            break;
        default:
            std::cout << "Unexpected character" << '\n';
            break;
        }
    }
}
} // namespace tundra
