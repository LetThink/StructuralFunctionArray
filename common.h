#pragma once
#ifndef _COMMON_H
#define _COMMON_H
#include "function.h"
int CallFunc();
//�����ṹ��
typedef struct
{
	char func[64];//������
}ExecuteStr;
typedef int (*ExeStr) (ExecuteStr*);
typedef struct 
{
	char *FucStr;   //  �����ַ���
	ExeStr Execute; //  ����ָ��
}FuctionStr;
typedef struct { 
	int m_no; 
	FuctionStr Func[64]; //�����ṹ��
}FuncStruct;

#endif // !_COMMON_H
