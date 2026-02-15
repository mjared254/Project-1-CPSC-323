# pragma once       // prevents header being used more then once per .cpp file
# include <string> 

const int T_Identifier = 1;   // These are the token idetification codes with int assignment
const int T_Keyword = 2;
const int T_Integer = 3;
const int T_Real = 4;
const int T_Operator = 5;
const int T_Seperator = 6;
const int T_UnknownTokenType = 7;
const int T_FileEnd = 8;