#include "Exception.h"
#include <iostream>

Exception::Exception() {
	Message = new char[40];
	strcpy(Message, "Произошло исключение неопознанного типа");
}
Exception::Exception(const char* message) {
	Message = new char[strlen(message) + 1];
	strcpy(Message, message);
}
const char* Exception::GetError() const {
	return Message;
}
Exception::~Exception() {
	delete[] Message;
}
