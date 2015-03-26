#include <dlfcn.h>

int dll_main(int argc, char **argv)
{
	void *phand1, *phand2, *phand3;
	void (*pfunc)();

	phand1 = dlopen("./lib1.so", RTLD_LAZY);
	phand2 = dlopen("./lib2.so", RTLD_LAZY);
	phand3 = dlopen("./lib3.so", RTLD_LAZY);

	if ((pfunc = dlsym(phand1, "func1")))
		pfunc();

	if ((pfunc = dlsym(phand2, "func2")))
		pfunc();

	if ((pfunc = dlsym(phand3, "func3")))
		pfunc();

	return 0;
}

