#include "IdFSM.h"

IDFSM::IDFSM() {    // STARTS FSM construction
    FSMstart();
}

void IDFSM::FSMstart() {    // FSMstart = goes to start of the FSM beginning state
    state_ = State_Start;
}

bool IDFSM::isAletter_(char c) const {  //isAletter_ = Checks text if its a letter
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'); // from a -> z
}

bool IDFSM::isAnumber_(char c) const { //isAnumber_ = checks text if its a number 
    return (c >= '0' && c <= '9'); //from 0 -> 9
}

bool IDFSM::isAnumber_(char c) const {
    return (c >= '0' && c <= '9');
}

bool IDFSM::makeCheck(char c) { // Takes ONE character from the text into the FSM and checks
    if (state_ == State_End)    //  to see if we keep going till fase to end the current state
        return false;

    if (state_ == State_Start) {    // Starts ONLY if the first character is a letter
        if (isAletter_(c)) {
            state_ = State_Identified;
            return true;
        }
        state_ = State_End;
        return false;
    }

    if (state_ == State_Identified) {   // Can accept letters, digits, and underscores in the running state
        if (isAletter_(c) || isAnumber_(c) || c == '_') {
            return true;
        }
        state_ = State_End;
        return false;
    }
    state_ = State_End;
    return false;
}
