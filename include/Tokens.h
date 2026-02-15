# pragma once       // prevents header being used more then once per .cpp file
# include <string> 

enum class TokenType    // token categories for lexer using enumeration
{
    Identifier,
    Keyword,
    Integer,
    Real,
    Operator,
    Separator,
    UnknownToken,
    FileEnd,
}; 

