#include "flib.h"
#include <iostream>

void bar()
{
	std::cout << "This is flib::bar()\n\n";
}

void foo()
{
	std::cout << "This is flib::foo()\n";
	bar();
}

