#include "common.h"
#include "function.h"
#include<stdio.h>
FuncStruct funcCall[] =
{
	{0x01,
	{(char*)"Function1",Function1},
	},
	{0x02,
	{(char*)"Function2",Function2},
	},
	{0x03,
	{(char*)"Function1",Function1},
	},
	{0x04,
	{(char*)"CallFunc",CallFunc},
	}
};
int CallFunc()
{
	printf("\r\n函数结构体调用Ok.\r\n\r\n");
	return 0;
}