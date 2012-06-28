#include "String.h"

String::String() {
	Data = null;
	Length = 0;
}

String::String(const char* txt) {
	//TODO It will be nice to not to copy "constant" strings 
	Length = strlen(txt);
	Data = new char[Length+1];
	strncpy(Data,txt,Length);
}

String* String::operator=(char* text) {
	String* s = new String(text);
	return s;
}

String::~String() {
	if(Data!=null) {
		delete Data;
		Data = null;
	}
}

String* String::Concat(Object* elements) {
	String* newstring = new String("String::Concat NotImplemented");
	delete elements;
	return newstring;
}