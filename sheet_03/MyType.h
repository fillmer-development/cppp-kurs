#ifndef MYTYPE_H_
#define MYTYPE_H_
#include <iostream>

struct MyType
{
	char s;
	//As a Python developer, these are all really strange

	MyType(char state);
	~MyType();
	MyType(const MyType &t);
	MyType &operator=(const MyType &t);
	MyType(MyType &&t);
	MyType &operator=(MyType &&t);
};
#endif