#pragma once

#include <iostream>
#include <string>
#include <cctype> // This allows me to use helper functions isdigit,isalpha.

class rFSM {
    public:

    bool r_Check(const std::string & input);

    private:

    enum class State {
        START,
        INT,
        DECIMAL_AFTER,
        FRACTION_NUM,
        DECIMAL_NO_INT,
        EXPONENTIAL_SIGN,
        EXPONENTIAL_DIGIT
    };

    State current_state;

    State transition_handler(State cur_transition, char inputChar);

    State accept_input(State validate);
};