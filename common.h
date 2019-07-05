#pragma once
#ifndef _COMMON_H
#define _COMMON_H
#include "function.h"
int CallFunc();
//函数结构体
typedef struct
{
	char func[64];//函数名
}ExecuteStr;
typedef int (*ExeStr) (ExecuteStr*);
typedef struct 
{
	char *FucStr;   //  函数字符串
	ExeStr Execute; //  函数指针
}FuctionStr;
typedef struct { 
	int m_no; 
	FuctionStr Func[64]; //函数结构体
}FuncStruct;

#endif // !_COMMON_H
