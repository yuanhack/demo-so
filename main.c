#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	void *phand = 0;
	void *pfunc = 0;

	if ((phand = dlopen("./libdll_main.so", RTLD_LAZY)) == 0) {
		printf("load resource error\n");
		exit(1);
	}

	if ((pfunc = dlsym(phand, "dll_main")) != 0)
		return ((int (*)(int, char**))pfunc)(argc, argv);

	return 1;
}

