#pragma once

#include <string>
#include "Tokens.h"
#include "IdFSM.h"
#include "IntFSM.h"
#include "RealFSM.h"

class Lexer {
public:


private:
    std::string input_;
    size_t i_;
    int line_;

    // FSMs >>>>
    IdFSM id_;
    IntFSM integer_;
    RealFSM real_;

    void skip_();      
    bool end_() const;
    char peek_(size_t off = 0) const;

    bool keyword_(const std::string& s) const;
    std::string lower_(std::string s) const;
};