#include <stdio.h> 
#include "3.h"



void func3(void)
{
	printf("call %s: %s: %d\n", __FILE__, __func__, __LINE__);
}

