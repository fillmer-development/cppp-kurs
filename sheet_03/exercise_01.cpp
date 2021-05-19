#include "MyType.h"
#include <iostream>

MyType createMyType()
{
	return MyType('C');
}
int main()
{
	MyType temp('A'); //constructor
	MyType temp2(std::move(temp));
	MyType temp3(createMyType());

	return 0;
}