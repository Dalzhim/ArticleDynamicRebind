#include <dlfcn.h>

int main()
{
	using f_type = int(*)();
	auto lib = dlopen("libflib.dylib", RTLD_NOW | RTLD_GLOBAL);
	f_type foo = (f_type)dlsym(lib, "_Z3foov");
	foo();

	auto glib = dlopen("libglib.dylib", RTLD_NOW | RTLD_GLOBAL);
	f_type foo2 = (f_type)dlsym(glib, "_Z3foov");
	foo2();
}
