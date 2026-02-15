#include "IdFSM.h"

IDFSM::IDFSM() {    // STARTS FSM construction
    FSMstart();
}

void IDFSM::FSMstart() {    // FSMstart = goes to start of the FSM beginning state
    state_ = State_Start;
}