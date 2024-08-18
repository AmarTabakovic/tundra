#ifndef TOKEN_TYPE_HPP
#define TOKEN_TYPE_HPP

namespace tundra {
namespace lex {

/**
 * @brief The TokenType enum
 */
enum class TokenType {
    kLeftParenthesis,
    kRightParenthesis,
    kLeftBrace,
    kRightBrace,
    kComma,
    kLeftBracket,
    kRightBracket,
    kDot,
    kMinus,
    kPlus,
    kColon,
    kSemiColon,
    kSlash,
    kStar,
    kPercent,

    kBang,
    kBangEqual,
    kEqual,
    kEqualEqual,
    kGreater,
    kGreaterEqual,
    kLess,
    kLessEqual,
    kArrow,

    kStringLiteral,
    kIntLiteral,
    kFloatLiteral,

    kIdentifier,
    kInt,
    kFloat,
    kDouble,
    kBool,
    kChar,
    kNil,
    kImport,
    kModule,
    kLet,
    kMut,
    kTrue,
    kFalse,

    kClass,
    kIf,
    kElse,
    kFn,
    kWhile,
    kFor,
    kReturn,
    kIn,
    kString,
    kContinue,

    kEof
};
}
} // namespace tundra
#endif // TOKEN_TYPE_HPP
