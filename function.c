#include "function.h"
#include <stdio.h>
int Function1(int i)
{
	printf("\r\n%d -> Call Back Function1",i);
	return 0;
}
int Function2(int i)
{
	printf("\r\n%d -> Call Back Function2", i);
	return 0;
}
int Function3(int i)
{
	printf("\r\n%d -> Call Back Function3", i);
	return 0;
}