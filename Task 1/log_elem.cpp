#include "logelem.h"
 
bool logMore(bool a, bool b) {
 	return a < b;
}
bool logLess(bool a, bool b) {
 	return a > b;
}
bool logEqul(bool a, bool b) {
 	return a == b;
}
bool StateConvert(bool a) {
 	return !a;
}
 
class LogicalElement {
public:
 	bool Statement;
 	LogicalElement() {
     	Statement = NULL;
 	}
 	LogicalElement(bool a) {
     	Statement = a;
 	}
 	void SetStatement(bool State) {
     	Statement = State;
 	}
 	bool GetStatement() {
     	return Statement;
 	}
 	bool StateReverse() {
     	Statement = StateConvert(Statement);
 	}
};
