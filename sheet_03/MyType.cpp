#include "MyType.h"
#include <iostream>

MyType::MyType(char state) : s(state)
{
	std::cout << "ctor called\n";
}

//As a Python developer, these are all really strange
MyType::~MyType()
{
	std::cout << "dtor called\n";
}

MyType::MyType(const MyType &t) = default;

MyType::MyType &MyType::operator=(const MyType &t) = default;

MyType::MyType(MyType &&t) = default;

MyType::MyType &MyType::operator=(MyType &&t) = default;
