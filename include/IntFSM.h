#pragma  once
#include <string>

class INTFSM {

public:
IntegerFSM();
void FSMstart();
bool makeCheck(char c);
bool validTokenAccept() const;
int startInteger(const std::string& s, int start);




private:
static const int Start_State = 0;
static const int Start_InInt = -1;
static const State_End = -1;
int state_ = State_Start;

};