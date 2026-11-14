#define _CRT_SECURE_NO_WARNINGS
#include"SqList.h"

void SqListInit(SqList* ps)
{
	ps->arr = (SqDataType*)malloc(sizeof(SqDataType) * 4);
	if (ps->arr == NULL)
	{
		printf("InitSqList:ÄÚ´æÉêÇë¿Õ¼äÊ§°Ü£¡£¡£¡\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;


}


void SqListDestroy(SqList* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}