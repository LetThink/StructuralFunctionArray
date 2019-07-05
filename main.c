#include "common.h"
#include "function.h"
#include <stdio.h>
extern FuncStruct funcCall[];
typedef int (*pFun) (ExecuteStr *); //函数指针
static  pFun CmdFunArray[256]; //函数表
static  pFun * const pfun = CmdFunArray; //函数数组
int main()
{
    int i=0;
    CmdFunArray[0] = Function1;
    CmdFunArray[1] = Function2;
    CmdFunArray[2] = Function3;
    CmdFunArray[3] = CallFunc;

	for (i = 0; i < 4; i++)
	{
		if (funcCall[i].m_no == 0x01)
		{
			pfun[i](funcCall[i].m_no);
			continue;
		}
		else if (strcmp(funcCall[i].Func[0].FucStr,"Function2")==0)
		{
			printf("\r\n %s",funcCall[i].Func[0].FucStr);
			pfun[i](funcCall[i].m_no);
		}
	}
	system("pause");
	return 0;
}
