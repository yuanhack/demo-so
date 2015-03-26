#include <stdio.h> 
#include "1.h"

void func1(void)
{
	printf("call %s: %s: %d\n", __FILE__, __func__, __LINE__);
}

