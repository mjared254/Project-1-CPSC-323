#include "Lexer.h"

#include <fstream>
#include <iterator>

Lexer::Lexer(const std::string& filename) { //LOAD the file into the source_
    keywordload_();

    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        fileOpened_ = false;
        return;
    }

    fileOpened_ = true;
    source_.assign(std::istreambuf_iterator<char>(inFile),
                   std::istreambuf_iterator<char>());

    index_ = 0;
    line_ = 1;
}