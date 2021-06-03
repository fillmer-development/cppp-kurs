#include <iostream>
#include <exception>
#include <math.h>

#define MY_ASSERT(BOOL_EXPR, MESSAGE)                                             \
	{                                                                               \
		if (!BOOL_EXPR)                                                               \
		{                                                                             \
			std::cout << MESSAGE << " in " << __FILE__ << " line " << __LINE__ << "\n"; \
			std::terminate()                                                            \
		}                                                                             \
	}

#define POWER(RESULT, BASE, EXPONENT) \
	{                                   \
		*RESULT = pow(BASE, EXPONENT)     \
	}
