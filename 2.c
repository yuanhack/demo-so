#include <stdio.h>
#include "2.h"


void func2(void)
{
	printf("call %s: %s: %d\n", __FILE__, __func__, __LINE__);
}

