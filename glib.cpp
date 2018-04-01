#include "glib.h"
#include <iostream>

void bar()
{
	std::cout << "This is glib::bar()\n\n";
}

void foo()
{
	std::cout << "This is glib::foo()\n";
	bar();
}

